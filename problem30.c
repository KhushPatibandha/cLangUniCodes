// Write a program that checks whether entered year is leap year or not

#include<stdio.h>
int main(void)
{
    int year;
    printf("Enter a year \n");
    scanf("%i", &year);

    if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        printf("Entered year is leap year \n");
    }
    else
    {
        printf("Not a leap year \n");
    }
    return 0;
}