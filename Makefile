all:
	$(MAKE) -C kernel
	$(MAKE) -C user
clean:
	$(MAKE) -C kernel
	$(MAKE) -C user

.PHONY: all clean
