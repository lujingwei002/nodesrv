
ROOT_PATH = ../../..

INCLUDE_DIRS=-I. -I$(ROOT_PATH)/include -I$(ROOT_PATH)/include/lua -I$(ROOT_PATH)/include/tolua++ -I$(ROOT_PATH)/src/engine

LIBS =$(ROOT_PATH)/src/engine/libneox.a $(ROOT_PATH)/lib/tolua++.a $(ROOT_PATH)/lib/liblua.a $(ROOT_PATH)/lib/libmysqlclient.a $(ROOT_PATH)/lib/libhiredis.a $(ROOT_PATH)/lib/libprotobuf.a

DY_LIBS = -lm -ldl -lreadline -lncurses -lpthread

CFLAGS=-O2 -Wall

SOURCE = $(wildcard \
		 *.cc\
		 ) 

OBJ = $(patsubst %.cc,%.o,$(SOURCE))

EXE = scenesrv

%.o:%.cc
	g++ $(CFLAGS) -c $< -o $@ $(INCLUDE_DIRS)

${EXE}:$(OBJ) $(LIBS)
	g++ -o $(EXE) $(OBJ) $(LIBS)  $(DY_LIBS)

tolua:
	$(ROOT_PATH)/3rd/tolua++/tolua++ -n scenesrv -o interface.cc interface.pkg

clean:
	rm -rf $(EXE)
	rm -rf $(OBJ)
