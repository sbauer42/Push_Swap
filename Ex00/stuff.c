#include "checker.h"

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

long    ft_atoi(char *nptr)
{
	long long int	i;
	long long int	r;
	long long int	n;

	i = 0;
	r = 0;
	n = 1;	
	if (nptr[i] == '-')
		n = -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i])
	{
		if (ft_isdigit(nptr[i]) == 0 )
			return (VOID);
		r *= 10;
		r += nptr[i] - '0';
		i++;
	}
	return (r * n);
}
int		writestacks(t_struct *s, char **av)
{
    int x;

    x = 1;
	while (x <= s->len)
	{
		s->a[x-1] = ft_atoi(av[x]);
		s->b[x-1] = VOID;
		if (s->a[x-1] == VOID)
			return (0);
		x += 1;
	}
	return (1);
}

void	readstack(long *a, t_struct *s)
{
    int	x;

	x = 0;
	while (x <  s->len)
    {
		if (a[x] == VOID && x != s->len - 1)
		{
			a[x] = a[x+1];
			a[x+1] = VOID;
		}
		//printf("\n%ld",a[x]);
		x += 1;
	}
}

void	treadstack(long *a, t_struct *s)
{
	int x;

    x = 0;
    while (x < len)
	{
		if (a[x] == VOID && x != len - 1)
		{
			a[x] = a[x+1];
			a[x+1] = VOID;
		}
		printf("\n%ld",a[x]);
		x += 1;
	}
}

int		chunks(int ac)
{
	if (ac < 100)
		return (ac - 1);
	if (ac >= 100 && ac < 500)
		return (5);
	else
		return (11);
}
