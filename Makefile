all: kernel user

kernel:
	$(MAKE) -C $@


user:user/config.status
	$(MAKE) -C $@

user/config.status:
	cd l4ka/user && autoconf && autoheader
	cd user && ../l4ka/user/configure --host=i386

clean:
	$(MAKE) -C kernel clean
	$(MAKE) -C user clean

.PHONY: all clean user kernel
