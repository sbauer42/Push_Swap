#include "checker.h"

long	smallest(long *a, t_struct *s)
{
	long res;
	int ret;
	int i;

	i = 0;
	ret = 0;
	res = VOID + 1;
	while(i < len)
	{
		if(a[i] < res)
		{
			res = a[i];
			ret = i;
		}
		i++;
	}
    //printf("\n---%ld---",res);
    //printf("---%d---",ret);
	return ret;
}

void	copylist(long *a, long *clone, int start, t_struct *s)
{
	while(start < len)
	{
		clone[start] = a[start];
		start++;
	}
}

void	sortlist(long *a, long *list, t_struct *s)
{
	long *clone;
	int i;
	int j;

	i = len;
	j = 0;
	clone = malloc(sizeof(long) * len );
	copylist(a, clone, 0, len);
	while(i)
	{
		list[j] = clone[smallest(clone, len)];
		clone[smallest(clone, len)] = VOID;
		j++;
		i--;
	}
	free (clone);
}
