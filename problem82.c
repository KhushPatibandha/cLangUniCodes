#include<stdio.h>

int findPow(int x, int n)
{
    int var = 1;
    for(int i = 0; i <= n; i++)
    {
        var *= x;
    }

    printf("%i", var);
}

int main(void)
{
    findPow(2, 3);
}