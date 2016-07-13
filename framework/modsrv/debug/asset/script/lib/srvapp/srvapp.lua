
dofile(os.getenv('ENGINE_PATH')..'/bin/luaenv')
local engine_dir = os.getenv('ENGINE_PATH')
package.cpath = string.format('%s/lib/?.so;', File.getcwd())..package.cpath
local srvname = arg[1]
local daemon = arg[2] == '-d' 
print('=================================')
print('       lua333 gamesrv            ')
print('=================================')
print(string.format('srvname(%s)', srvname))
print(string.format('engine_dir(%s)', engine_dir))
print(string.format('package.path(%s)', package.path))
print(string.format('package.cpath(%s)', package.cpath))
require('config')
local srvlist = require('conf/srvlist')
local srvconf = nil
for _, _srvconf in pairs(srvlist) do
    if _srvconf.srvname == srvname then
        srvconf = _srvconf
        break
    end
end
if not srvconf then
    print(string.format('srvname(%s) not found', srvname))
    return
end
print(string.format('start %s', srvconf.srvname))
Config.srvid = srvconf.srvid
Config.srvname = srvconf.srvname
Config.script_dir = srvconf.script_dir
Config.engine_dir = engine_dir
Config.game_dir = File.getcwd()
Config.daemon = daemon
for _, conf in ipairs(srvconf.mod) do
    local mod = import(conf[1])
    mod._CONF = conf 
end
Mod.call('main')
require(Config.script_dir..'/main')
Main.main()