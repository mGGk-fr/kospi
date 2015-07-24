GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.55.1
COMPILE=/home/mggk/mggkospi/buildroot/output/host/usr/bin/arm-buildroot-linux-uclibcgnueabihf-gcc -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_HAVE_ATOMIC=1 -DU_HAVE_TIMEZONE=0 -DU_HAVE_WCSCPY=0  -DU_ATTRIBUTE_DEPRECATED= -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64   -Os  -std=c99 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/usr/include -DPIC -fPIC
GENLIB=/home/mggk/mggkospi/buildroot/output/host/usr/bin/arm-buildroot-linux-uclibcgnueabihf-gcc -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64   -Os  -std=c99 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings    -shared -Wl,-Bsymbolic
LDICUDTFLAGS=
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=/home/mggk/mggkospi/buildroot/output/host/usr/bin/arm-buildroot-linux-uclibcgnueabihf-ar
ARFLAGS=r
RANLIB=/home/mggk/mggkospi/buildroot/output/host/usr/bin/arm-buildroot-linux-uclibcgnueabihf-ranlib
INSTALL_CMD=/usr/bin/install -c
