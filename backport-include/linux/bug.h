#ifndef __BACKPORT_BUG_H
#define __BACKPORT_BUG_H
#include_next <linux/bug.h>

#ifndef __BUILD_BUG_ON_NOT_POWER_OF_2
# ifdef __CHECKER__
#  define __BUILD_BUG_ON_NOT_POWER_OF_2(n) (0)
# else
#  define __BUILD_BUG_ON_NOT_POWER_OF_2(n)	\
	BUILD_BUG_ON(((n) & ((n) - 1)) != 0)
# endif
#endif

#endif
