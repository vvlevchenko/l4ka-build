#########################################################################
## 
## Copyright (C) 2002-2003, Karlsruhe University
##
## File path:	util/piggybacker/Makefile.in
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
## $Id: Makefile.in,v 1.7 2003/11/28 12:45:24 joshua Exp $
##
#########################################################################

srcdir=		../../../../l4ka/user/util/piggybacker/ofppc
top_srcdir=	../../../../l4ka/user
top_builddir=	../../..

include $(top_srcdir)/Mk/l4.base.mk
include $(top_srcdir)/util/piggybacker/piggyback.mk

PROGRAM=	ofppc-loader
PROGRAM_DEPS=	$(SIGMA0) $(ROOT_TASK) $(KERNEL)

SRCS=	main.cc crt0.S io.cc ../common/ieee1275.cc ../common/kip.cc \
	../common/string.cc ../common/1275tree.cc

CFLAGS+=	-fno-builtin -I$(top_srcdir)/util/piggybacker/include
CXXFLAGS+=	-fno-rtti
LDFLAGS+=	-Ttext=$(KICKSTART_LINKBASE)

CFLAGS_powerpc+=	-msoft-float
CPPFLAGS_powerpc+=	-msoft-float

pre-all:
	@if test ! -d ../common; then mkdir ../common; fi

include $(top_srcdir)/Mk/l4.prog.mk

