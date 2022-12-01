// Write a program that checks whether input number is divisible by 5 or not

#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter a number \n");
    scanf("%i", &num);

    if(num % 5 == 0)
    {
        printf("Divisible by 5 \n");
    }
    else
    {
        printf("Not divisible by 5 \n");
    }

    return 0;
}