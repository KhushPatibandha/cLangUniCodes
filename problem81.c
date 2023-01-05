#include<stdio.h>

int max(int a, int b)
{
    return a>b ? a : b;
}

int main(void)
{
    // max(10, 9);
    printf("%i", max(10, 9));
    return 0;
}