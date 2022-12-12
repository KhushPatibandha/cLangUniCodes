/*
    Write a program in c to convert a given integer in second to hour, minutes and seconds
*/

#include<stdio.h>
int main(void)
{
    int seconds, hour, minute, second;

    printf("Enter time in seconds \n");
    scanf("%i", &seconds);

    hour = seconds/3600;
    seconds -= hour*3600;

    minute = seconds/60;
    seconds -= minute*60;

    second = seconds;
    
    printf("Time is %i:%i:%i \n", hour, minute, second);

    return 0;
}