CFLAGS := -fPIC
CCLD ?= $(CC)

FMOD_OBJ := fmod.o
#TODO separate fmod and fmod studio

default: libfmod.so

libfmod.so: $(FMOD_OBJ)
	$(CCLD) -shared -o libfmod.so $(FMOD_OBJ)

clean:
	rm -f $(FMOD_OBJ) libfmod.so
