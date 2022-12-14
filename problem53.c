/*
    Write a program to display prime numbers between 1 and 100. 
*/

#include<stdio.h>
int main(void)
{
    int factor = 0;

    for(int i = 2; i <= 100; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                factor++;
            }
        }

        if(factor == 2)
        {
            printf("%i \n", i);
        }
        factor = 0;
    }

    return 0;
}