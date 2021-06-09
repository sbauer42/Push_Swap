#include "checker.h"

int		insidelist(long target, long *chunk)
{
	long	len;
	int		i;

	len = chunk[0] + 1;
	i = 1;
	while (i < len)
	{
		if (chunk[i] == target)
			return (1);
		i++;
	}
	return (0);
}

void	holds(long *a, long *chunk, int *iht, int *ihb, t_struct *s)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (insidelist(a[i], chunk))
		{
			*iht = i;
		}
		i++;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (insidelist(a[i], chunk))
		{
			*ihb = i;
		}
		i--;
	}
}

