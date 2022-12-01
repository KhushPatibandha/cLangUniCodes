// Write a program that checks whether input number is positive, negative no zero

#include<stdio.h>
int main(void)
{
    int nums;
    printf("Enter the value of num \n");
    scanf("%i", &nums);

    if(nums > 0)
    {
        printf("Number is positive \n");
    }
    else if(nums < 0)
    {
        printf("Number is negative \n");
    }
    else
    {
        printf("Number is Zero \n");
    }

    return 0;
}