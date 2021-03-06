#include "log/logger.h"

static const char *s_level_str[] = {"FATAL", "ERROR", "WARN", "INFO", "DEBUG", "MSG"};

Logger::Logger()
{
    format[0] = 0;
    tag[0] = 0;
    flag = 0xffffffff;
    this->set_tag("TAG");
    this->set_format("[%04Y-%02M-%02D %02H:%02m:%02S %06u][%T][%P][%L]%s\n");
}

void Logger::fatal(const char* fmt, va_list args)
{
    log_vprint(FATAL, fmt, args);
}

void Logger::fatal(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_vprint(FATAL, fmt, args);
    va_end(args);
}

void Logger::error(const char* fmt, va_list args)
{
    log_vprint(ERROR, fmt, args);
}
void Logger::error(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_vprint(ERROR, fmt, args);
    va_end(args);
}

void Logger::warn(const char* fmt, va_list args)
{
    log_vprint(WARN, fmt, args);
}

void Logger::warn(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_vprint(WARN, fmt, args);
    va_end(args);
}

void Logger::info(const char* fmt, va_list args)
{
    log_vprint(INFO, fmt, args);
}

void Logger::info(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_vprint(INFO, fmt, args);
    va_end(args);
}

void Logger::msg(const char* fmt, va_list args)
{
    log_vprint(MSG, fmt, args);
}

void Logger::msg(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_vprint(MSG, fmt, args);
    va_end(args);
}


void Logger::debug(const char* fmt, va_list args)
{
    log_vprint(DEBUG, fmt, args);
}

void Logger::debug(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_vprint(DEBUG, fmt, args);
    va_end(args);
}

void Logger::log(const char* str)
{
    printf(str);
    fflush(stdout);
}

void Logger::log_vprint(int level, const char *fmt, va_list ap)
{
    if (!(flag & (1 << level)))
    {
        return;
    }
    static char msg[4096];
    vsnprintf(msg, sizeof(msg), fmt, ap);

    static char buf[4096];
    const char *level_str = s_level_str[level];
    _vsprintf(buf, this->format, level_str, msg);

    log(buf);
}

void Logger::set_format(const char* val)
{
    strncpy(this->format, val, sizeof(this->format));
}

void Logger::set_tag(const char* val)
{
    strncpy(this->tag, val, sizeof(this->tag));
}

void Logger::openlevel(int level)
{
    flag |= 1 << level;
}

void Logger::closelevel(int level)
{
    flag &= ~(1 << level);
}

static int skip_atoi(const char **s)
{
    int i = 0;

    while (isdigit(**s))
        i = i * 10 + *((*s)++) - '0';
    return i;
}

#define ZEROPAD     1        /*  pad with zero */
#define SIGN        2        /*  unsigned/signed long */
#define PLUS        4        /*  show plus */
#define SPACE       8        /*  space if plus */
#define LEFT        16       /*  left justified */
#define SMALL       32       /*  Must be 32 == 0x20 */
#define SPECIAL     64       /*  0x */

#define __do_div(n, base) ({ \
        int __res; \
        __res = ((unsigned long) n) % (unsigned) base; \
        n = ((unsigned long) n) / (unsigned) base; \
        __res; })

static char *number(char *str, long num, int base, int size, int precision, int type)
{
    /*  we are called with base 8, 10 or 16, only, thus don't need "G..." */
    static const char digits[17] = "0123456789ABCDEF"; /*  "GHIJKLMNOPQRSTUVWXYZ"; */

    char tmp[66];
    char c, sign, locase;
    int i;

    /*  locase = 0 or 0x20. ORing digits or letters with 'locase'
     *       * produces same digits or (maybe lowercased) letters */
    locase = (type & SMALL);
    if (type & LEFT)
        type &= ~ZEROPAD;
    if (base < 2 || base > 36)
        return NULL;
    c = (type & ZEROPAD) ? '0' : ' ';
    sign = 0;
    if (type & SIGN) {
        if (num < 0) {
            sign = '-';
            num = -num;
            size--;
        } else if (type & PLUS) {
            sign = '+';
            size--;
        } else if (type & SPACE) {
            sign = ' ';
            size--;
        }
    }
    if (type & SPECIAL) {
        if (base == 16)
            size -= 2;
        else if (base == 8)
            size--;
    }
    i = 0;
    if (num == 0)
        tmp[i++] = '0';
    else
        while (num != 0)
            tmp[i++] = (digits[__do_div(num, base)] | locase);
    if (i > precision)
        precision = i;
    size -= precision;
    if (!(type & (ZEROPAD + LEFT)))
        while (size-- > 0)
            *str++ = ' ';
    if (sign)
        *str++ = sign;
    if (type & SPECIAL) {
        if (base == 8)
            *str++ = '0';
        else if (base == 16) {
            *str++ = '0';
            *str++ = ('X' | locase);
        }
    }
    if (!(type & LEFT))
        while (size-- > 0)
            *str++ = c;
    while (i < precision--)
        *str++ = '0';
    while (i-- > 0)
        *str++ = tmp[i];
    while (size-- > 0)
        *str++ = ' ';
    return str;
}

/*
 * y 年
 * m 月
 * D 日
 * H 小时
 * M 分
 * S 秒
 * P 进程id
 * T 标签
 * s 字符串
 *
 */
int Logger::_vsprintf(char *buf, const char* fmt, const char* level, const char *msg)
{
    int len;
    unsigned long num;
    int i, base;
    char *str;
    const char *s;

    int flags;          /*  flags to number() */

    int field_width;    /*  width of output field */
    int precision;      /*  min. # of digits for integers; max number of chars for from string */

    struct timeval t;
    gettimeofday(&t, NULL);
    struct tm *tm = localtime(&t.tv_sec);

    for (str = buf; *fmt; ++fmt) 
    {
        if (*fmt != '%') 
        {
            *str++ = *fmt;
            continue;
        }

        /*  process flags */
        flags = 0;
repeat:
        ++fmt;        /*  this also skips first '%' */
        switch (*fmt) {
            case '-':
                flags |= LEFT;
                goto repeat;
            case '+':
                flags |= PLUS;
                goto repeat;
            case ' ':
                flags |= SPACE;
                goto repeat;
            case '#':
                flags |= SPECIAL;
                goto repeat;
            case '0':
                flags |= ZEROPAD;
                goto repeat;
        }

        /*  get field width */
        field_width = -1;
        if (isdigit(*fmt))
            field_width = skip_atoi(&fmt);

        /*  get the precision */
        precision = -1;
        if (*fmt == '.') {
            ++fmt;
            if (isdigit(*fmt))
                precision = skip_atoi(&fmt);
            if (precision < 0)
                precision = 0;
        }

        /*  default base */
        base = 10;

        switch (*fmt) {
            case 'Y':
                num = tm->tm_year + 1900;
                break;

            case 'M':
                num = tm->tm_mon + 1;
                break;

            case 'D':
                num = tm->tm_mday;
                break;

            case 'H':
                num = tm->tm_hour;
                break;

            case 'm':
                num = tm->tm_min;
                break;

            case 'S':
                num = tm->tm_sec;
                break;

            case 'u':
                num = (long)t.tv_usec;
                break;

            case 'P':
                num = getpid();
                break;

            case '%':
                *str++ = '%';
                continue;

            case 'L'://级别
                s = level;
                len = strnlen(s, precision);
                if (!(flags & LEFT))
                    while (len < field_width--)
                        *str++ = ' ';
                for (i = 0; i < len; ++i)
                    *str++ = *s++;
                while (len < field_width--)
                    *str++ = ' ';
                continue;

            case 's'://内容
                s = msg;
                len = strnlen(s, precision);
                if (!(flags & LEFT))
                    while (len < field_width--)
                        *str++ = ' ';
                for (i = 0; i < len; ++i)
                    *str++ = *s++;
                while (len < field_width--)
                    *str++ = ' ';
                continue;
            
            case 'T'://标签
                s = this->tag;
                len = strnlen(s, precision);
                if (!(flags & LEFT))
                    while (len < field_width--)
                        *str++ = ' ';
                for (i = 0; i < len; ++i)
                    *str++ = *s++;
                while (len < field_width--)
                    *str++ = ' ';
                continue;
/*  
    printf("[%04d-%02d-%02d %02d:%02d:%02d.%06ld][%s]", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec, (long)t.tv_usec, level_msg);

            case 'c':
                if (!(flags & LEFT))
                    while (--field_width > 0)
                        *str++ = ' ';
                *str++ = (unsigned char)va_arg(args, int);
                while (--field_width > 0)
                    *str++ = ' ';
                continue;

            case 's':
                s = va_arg(args, char *);
                len = strnlen(s, precision);

                if (!(flags & LEFT))
                    while (len < field_width--)
                        *str++ = ' ';
                for (i = 0; i < len; ++i)
                    *str++ = *s++;
                while (len < field_width--)
                    *str++ = ' ';
                continue;

            case 'p':
                if (field_width == -1) {
                    field_width = 2 * sizeof(void *);
                    flags |= ZEROPAD;
                }
                str = number(str,
                        (unsigned long)va_arg(args, void *), 16,
                        field_width, precision, flags);
                continue;

            case 'n':
                if (qualifier == 'l') {
                    long *ip = va_arg(args, long *);
                    *ip = (str - buf);
                } else {
                    int *ip = va_arg(args, int *);
                    *ip = (str - buf);
                }
                continue;


            case 'o':
                base = 8;
                break;

            case 'x':
                flags |= SMALL;
            case 'X':
                base = 16;
                break;

            case 'd':
            case 'i':
                flags |= SIGN;
            case 'u':
                break;
                */

            default:
                *str++ = '%';
                if (*fmt)
                    *str++ = *fmt;
                else
                    --fmt;
                continue;
        }
        str = number(str, num, base, field_width, precision, flags);
    }
    *str = '\0';
    return str - buf;
}

void Logger::closealllevel()
{
    flag = 0;
}
