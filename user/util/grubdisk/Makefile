######################################################################
##                
## Copyright (C) 2004, 2007, 2010-2011,  Karlsruhe University
##                
## File path:     pistachio/pistachio-git/user/util/grubdisk/Makefile.in
## Description:   Build a bootable disk image
## 
## Redistribution and use in source and binary forms, with or without
## modification, are permitted provided that the following conditions
## are met:
## 1. Redistributions of source code must retain the above copyright
##    notice, this list of conditions and the following disclaimer.
## 2. Redistributions in binary form must reproduce the above copyright
##    notice, this list of conditions and the following disclaimer in the
##    documentation and/or other materials provided with the distribution.
## 
## THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
## ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
## IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
## ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
## FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
## DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
## OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
## HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
## LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
## OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
## SUCH DAMAGE.
## 
## $Id: Makefile.in,v 1.1 2006/11/24 15:46:44 ud3 Exp $
## 
######################################################################

srcdir=		../../../l4ka/user/util/grubdisk
top_srcdir=	../../../l4ka/user
top_builddir=	../..

APP=${top_builddir}/apps/bench/pingpong/pingpong
STRIP=		$(TOOLPREFIX)strip
	
include $(top_srcdir)/Mk/l4.base.mk

do-all:	bootdisk.img


bootdisk.img:	grub.img mtoolsrc ${srcdir}/menu.lst ${top_builddir}/util/kickstart/kickstart ${top_builddir}/serv/sigma0/sigma0  \
		${APP} ${kerneldir}/${KERNEL}
	@# Create a disk image
	rm -f bootdisk.img 	
	/sbin/mkdosfs -C bootdisk.img 1440
	@# Make it a GRUB disk
	dd if=grub.img of=bootdisk.img conv=notrunc > /dev/null
	#@ Strip and zip binaries
	cp -u ${top_builddir}/*/*/{kickstart,sigma0} ${kerneldir}/${KERNEL}  ${APP} . || exit 0
	$(STRIP) ${notdir ${APP}} sigma0 kickstart ${KERNEL}
	gzip -f ${notdir ${APP}} sigma0 kickstart ${KERNEL}
	cat ${srcdir}/menu.lst | sed -e "s/APP/${notdir ${APP}}/" > menu.lst
	@# Copy the binaries to it
	export MTOOLSRC=mtoolsrc ; \
	mcopy -m menu.lst y:boot/grub ; \
	mcopy -m kickstart.gz y: ; \
	mcopy -m ${KERNEL}.gz y:kernel.gz ; \
	mcopy -m sigma0.gz y: ; \
	mcopy -m ${notdir ${APP}}.gz y: ; 

grub.img:
	# Fetch GRUB disk image from web if not local
	wget -O grub.img "http://i30www.ira.uka.de/~ud3/mkgrubdisk/makegrubbootdisk2.cgi?MENUPATH=/boot/grub/menu.lst"

mtoolsrc:
	echo 'drive y: file="bootdisk.img"' > $@


do-clean:
	$(RM) bootdisk.img mtoolsrc ${notdir ${APP}}.gz sigma0.gz kickstart.gz ${KERNEL}.gz
