/*
    Write a program to add first 5 even numbers
*/

#include<stdio.h>
int main(void)
{
    int x = 2, sum, count = 0;

    while(count < 5)
    {
        sum += x;
        x += 2;
        count++;
    }

    printf("Sum = %i \n", sum);
    return 0;
}