#ifndef CHECKER_H
#define CHECKER_H

void swaptop(long *a,int len);
void swapboth(long *a,long *b,int len);
void shiftup(long *a, long len);
void shiftdown(long *a, int len);
void push(long *a,long *b,int len);
void rotateup(long *a,int len);
void rotaterev(long *a,int len);
void rotaterevboth(long *a,long *b, int len);
void rotateboth(long *a,long *b,int len);
long smallest(long *a,int len);
int	ft_isdigit(int c);
long    ft_atoi(char *nptr);
int writestacks(long *a,long *b,int len,char ** av);
void readstack(long *a,int len);
int chunks(int ac);
void treadstack(long *a,int len);
void holds(long *a,long *chunk,int *iht,int *ihb,int len);
void copylist(long *a,long *clone,int start,int len);
#endif