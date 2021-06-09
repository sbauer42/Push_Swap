#include "checker.h"

void	doit(long *a, long *b, int chunks, int len)
{
	long	*list;

	list = malloc(sizeof(long) * len);
	sortlist(a, list, len);
	printf("\n--------------------");
	treadstack(list, len);
	free (list);
}

int	main(int ac , char **av)
{
	t_struct *s;
	t_struct t;

    s = &t;
	s->len = ac - 1;
	//printf( "\n%d",len);
	s->a = malloc(sizeof(long) * s->len);
	s->b = malloc(sizeof(long) * s->len);
	s->list = malloc(sizeof(long) * 10000);
	//printf( "\n--------------------");
	if (writestacks(s, av))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
	//printf( "\n--------------------");
	//readlist();
	return (1);
}
