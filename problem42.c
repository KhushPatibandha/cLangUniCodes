/*
    Write a program to add first 5 odd numbers
*/

#include<stdio.h>
int main(void)
{
    int x = 1, sum, count = 0;

    while(count < 5)
    {
        sum += x;
        x += 2;
        count++;
    }

    printf("Sum = %i \n", sum);
    return 0;
}