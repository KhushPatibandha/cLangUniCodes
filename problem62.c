/*
    Write a program to find a set of leap year between ranges of years. 
*/

#include<stdio.h>
int main(void)
{
    int startYear = 1700;
    int endYear = 1750;

    for(int i = startYear; i <= endYear; i++)
    {
        if((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
        {
            printf("%i \n", i);
        }
    }

    return 0;
}