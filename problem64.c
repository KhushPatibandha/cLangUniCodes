/*
    Write a program that displays multiplication table of given no.
*/

#include<stdio.h>
int main(void)
{
    int num;

    printf("Enter a number to enter to print its table \n");
    scanf("%i", &num);

    for(int i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i \n", num, i, (num*i));
    }

    return 0;
}