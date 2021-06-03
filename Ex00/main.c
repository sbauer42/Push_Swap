#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "checker.h"
#define VOID 9999999999
#include "search.c"
#include "stuff.c"
#include "orders.c"



void doit(long *a,long *b,int chunks,int len)
{
    long *list;
    list = malloc(sizeof(long) * len );
    sortlist(a,list,len);
    printf("\n--------------------");
    treadstack(list,len);
    free (list);
}

int main( int ac ,char ** av)
{
    long *a;
    long *b;
    int len;
    len = ac - 1;
    //printf( "\n%d",len);
    a = malloc(sizeof(long) * len );
    b = malloc(sizeof(long) * len );
    //printf( "\n--------------------");
    if(writestacks(a,b,len,av))
    {
        doit(a,b,chunks(ac),len);
    }
    else
    {
        printf("Error");
    }
    //printf( "\n--------------------");
    free(a);
    free(b);
    return (1);
}