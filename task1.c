#include <stdio.h>

void zeroInt(int *x);

int main()
{
    int a=9;
    zeroInt(&a);
    printf("a is now %d\n", a);
    return 0;
}

void zeroInt(int *x)
{
    *x=0;
}