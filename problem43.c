/*
    Write a progam to find a factorial of any given number
*/

#include<stdio.h>
int main(void)
{
    int fact = 1, num = 5, i = 1;
    // printf("Enter a value of num \n");

    while (i <= num)
    {
        fact *= i;
        i++;
    }
    
    printf("Factorial = %i \n", fact);
    return 0;
}