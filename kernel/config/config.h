/* Automatically generated, don't edit */
/* Generated on: l4ka */
/* At: Thu, 28 Apr 2016 19:53:12 +0000 */
/* Linux version 4.4.0-21-generic (buildd@lgw01-21) (gcc version 5.3.1 20160413 (Ubuntu 5.3.1-14ubuntu2) ) #37-Ubuntu SMP Mon Apr 18 18:33:37 UTC 2016 */

/* Pistachio Kernel Configuration System */

/* Hardware */

/* Basic Architecture */
#define CONFIG_ARCH_X86 1
#undef  CONFIG_ARCH_POWERPC
#undef  CONFIG_ARCH_POWERPC64


/* X86 Processor Architecture */
#define CONFIG_SUBARCH_X32 1
#undef  CONFIG_SUBARCH_X64


/* Processor Type */
#undef  CONFIG_CPU_X86_I486
#undef  CONFIG_CPU_X86_I586
#undef  CONFIG_CPU_X86_I686
#define CONFIG_CPU_X86_P4 1
#undef  CONFIG_CPU_X86_K8
#undef  CONFIG_CPU_X86_C3
#undef  CONFIG_CPU_X86_SIMICS


/* Platform */
#define CONFIG_PLAT_PC99 1


/* Miscellaneous */
#undef  CONFIG_IOAPIC

#undef  CONFIG_SMP


/* Kernel */
#define CONFIG_EXPERIMENTAL 1

/* Experimental Features */
#define CONFIG_X_PAGER_EXREGS 1
#define CONFIG_X_CTRLXFER_MSG 1
#undef  CONFIG_X_X86_HVM
#undef  CONFIG_X_EVT_LOGGING

/* Kernel scheduling policy */
#define CONFIG_SCHED_RR 1
#undef  CONFIG_X_SCHED_HS


#define CONFIG_IPC_FASTPATH 1
#undef  CONFIG_DEBUG
#undef  CONFIG_DEBUG_SYMBOLS
#undef  CONFIG_PERFMON
#undef  CONFIG_SPIN_WHEELS
#undef  CONFIG_NEW_MDB
#undef  CONFIG_STATIC_TCBS
#undef  CONFIG_X86_SMALL_SPACES


/* Debugger */

/* Kernel Debugger Console */
#undef  CONFIG_KDB_CONS_COM

#undef  CONFIG_KDB_BREAKIN_BREAK
#undef  CONFIG_KDB_BREAKIN_ESCAPE


/* Code Generator Options */


/* Derived symbols */
#undef  CONFIG_HAVE_MEMORY_CONTROL
#define CONFIG_X86_PSE 1
#undef  CONFIG_BIGENDIAN
#undef  CONFIG_PPC_MMU_TLB
#define CONFIG_X86_SYSENTER 1
#define CONFIG_X86_PGE 1
#define CONFIG_X86_FXSR 1
#define CONFIG_IS_32BIT 1
#define CONFIG_X86_HTT 1
#define CONFIG_X86_PAT 1
#undef  CONFIG_PPC_BOOKE
#undef  CONFIG_IS_64BIT
#undef  CONFIG_MULTI_ARCHITECTURE
#undef  CONFIG_X86_EM64T
#undef  CONFIG_PPC_CACHE_L1_WRITETHROUGH
#undef  CONFIG_PPC_TLB_INV_LOCAL
#undef  CONFIG_PPC_CACHE_ICBI_LOCAL
#undef  CONFIG_X86_SMALL_SPACES_GLOBAL
#define CONFIG_X86_HVM 1
#undef  CONFIG_PPC_MMU_SEGMENTS
#define CONFIG_X86_TSC 1
/* That's all, folks! */
#define AUTOCONF_INCLUDED
