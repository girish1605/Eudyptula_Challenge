obj-m:=hello_kernel.o

KDIR=/lib/modules/$(shell uname -r)/build

all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(shell pwd) modules

install:
	$(MAKE) -C $(KDIR) SUBDIRS=$(shell pwd) modules_install

clean:
	$(MAKE) -C $(KDIR) SUBDIRS=$(shell pwd) clean
