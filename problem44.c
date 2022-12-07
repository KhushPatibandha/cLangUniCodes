/*
    Write a program to print first N elements of fibonacei series
*/

#include<stdio.h>
int main(void)
{
    int a = 0, b = 1, c, n = 5, i = 3;
    
    printf("%i \n", a);
    printf("%i \n", b);

    while(i <= n)
    {
        c = a + b;

        printf("%i \n", c);

        a = b;
        b = c;

        i++;
    }

    return 0;
}