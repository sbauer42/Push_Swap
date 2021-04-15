#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *s)
{
	int x;

	x = 0;
	while (s[x])
	{
		x++;
	}
	return (x);
}

int myatoi(char *s)
{
    long long x;
    x = 0;
    int i;
    i = 0;
    int y;
    y = 1;
    if (s[i] == '-')
    {
        y = -1;
        i++;
    }
    while(s[i] >= '0' && s[i] <= '9')
    {
        x += s[i] - '0';
        x *= 10;
        i++;
    }
    if(s[i] != '\0' || x > 2147483647 || x < -2147483648 )
    {
        printf("Error\n");
        exit(0);
    }
    else{
        return(x * y);
    }
}


int main( int ac ,char ** av)
{
    long *a;
    long *b;
    char *str;
    char c;
    a = malloc(sizeof(int) * ac );
    b = malloc(sizeof(int) * ac );
    str = malloc(sizeof(int) * 6 );
    int i;
    i = 1;
    while(i < ac)
    {
        a[i] = myatoi(av[i]);
        i++;
    }
    while(i = read(0,str,5) > 0)
    {
        printf("%d \n",i);
        str[i] = '\0';
        printf("%s",str);
    }
    free(a);
    free(b);
    return (1);
}