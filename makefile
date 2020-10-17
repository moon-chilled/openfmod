CFLAGS := -fPIC -Iinclude -isystem /usr/local/include -Wall -Wextra -Wno-unused-parameter
LDFLAGS := /usr/local/lib/libgorilla.a -L/usr/local/lib/ -lopenal -ljansson
CCLD ?= $(CC)

FMOD_OBJ := src/stub.o src/fmod-studio.o src/fsb-file.o src/maps.o

default: libfmod.so

libfmod.so: $(FMOD_OBJ)
	$(CCLD) -shared -o libfmod.so $(FMOD_OBJ) $(LDFLAGS)

clean:
	rm -f $(FMOD_OBJ) libfmod.so

install: libfmod.so
	install libfmod.so /usr/local/lib/
