/*
    Write a program in c to convert a given integer in days to years, months and days
*/

#include<stdio.h>
int main(void)
{
    int days, year, month;
    printf("Enter days \n");
    scanf("%i", &days);

    year = days/365;
    days -= year*365;

    month = days/30;
    days -= month*30;

    printf("Duration %i:%i:%i \n", year, month, days);

    return 0;
}