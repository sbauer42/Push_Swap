# ifndef	CHECKER_H
# define	CHECKER_H

typedef struct	s_struct
{
	int		len;
	long	*a;
	long	*b;
	int		*list;
}				t_struct;

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define VOID 9999999999
#include "holds.c"
#include "search.c"
#include "stuff.c"
#include "orders.c"
#include "orders2.c"

#endif