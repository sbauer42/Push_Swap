void swaptop(long *a)
{
    int x;
    x = a[0];
    a[0] = a[1];
    a[1] = x;
}

void swapboth(long *a,long *b)
{
    swap(a);
    swap(b);
}

void shiftup(long *a, long len)
{
    int i;
    long x;
    i = len - 1;
    x = a[i];
    while (i != 0)
    {
        i--;
        long save;
        save = a[i];
        a[i] = x;
        x = save;
    }
}

void shiftdown(long *a, int len)
{
    int i;
    long x;
    i = 0;
    x = a[i];
    while (i < len - 1)
    {
        i++;
        long save;
        save = a[i];
        a[i] = x;
        x = save;
    }
}

void push(long *a,long *b,int len) 
{
    long save;
    save = a[0];
    shiftup(a, len);
    shiftdown(b, len);
    a[len - 1] = VOID;
    b[0] = save;
}

void rotateup(long *a,int len)
{
    long save;
    save = a[0];
    shiftup(a);
    a[len - 1] = save;
}

void rotaterev(long *a,int len)
{
    long save;
    save = a[len - 1];
    shiftdown(a);
    a[0] = save;
}

void rotaterevboth(long *a,long *b, int len)
{
    rotaterev(a,len);
    rotaterev(b,len);
}

void rotateboth(long *a,long *b,int len)
{
    rotateup(a,len);
    rotateup(b,len);
}