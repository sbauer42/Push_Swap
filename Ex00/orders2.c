#include "checker.h"

void	rotateup(long *a, t_struct *s)
{
	long	save;

	save = a[0];
	shiftup(a, len);
	a[len - 1] = save;
	readstack(a, len);
}

void	rotaterev(long *a, t_struct *s)
{
	long	save;

	save = a[len - 1];
	shiftdown(a, len);
	a[0] = save;
	readstack(a, len);
}
