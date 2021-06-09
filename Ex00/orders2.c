#include "checker.h"

void	rotateup(long *a, int len)
{
	long	save;

	save = a[0];
	shiftup(a, len);
	a[len - 1] = save;
	readstack(a, len);
}

void	rotaterev(long *a, int len)
{
	long	save;

	save = a[len - 1];
	shiftdown(a, len);
	a[0] = save;
	readstack(a, len);
}

void	rotaterevboth(long *a, long *b, int len)
{
	rotaterev(a, len);
	rotaterev(b, len);
	readstack(a, len);
	readstack(b, len);
}

void	rotateboth(long *a, long *b, int len)
{
	rotateup(a, len);
	rotateup(b, len);
	readstack(a, len);
	readstack(b, len);
}
