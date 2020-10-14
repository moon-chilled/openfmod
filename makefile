CFLAGS := -fPIC -Iinclude -isystem /usr/local/include
LDFLAGS := /usr/local/lib/libgorilla.a -L/usr/local/lib/ -lopenal
CCLD ?= $(CC)

FMOD_OBJ := src/stub.o src/fmod-studio.o

default: libfmod.so

libfmod.so: $(FMOD_OBJ)
	$(CCLD) -shared -o libfmod.so $(FMOD_OBJ) $(LDFLAGS)

clean:
	rm -f $(FMOD_OBJ) libfmod.so

install: libfmod.so
	install libfmod.so /usr/local/lib/
