/*
    Write a program to find whether a number is palindrome or not
*/

#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter a number \n");
    scanf("%i", &num);

    if(num < 0 || (num % 10 == 0 && num != 0))
    {
        printf("Not a palindrome \n");
    }

    int reverse = 0;
        
    while(num > reverse)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if(num == reverse || reverse / 10 == num)
    {
        printf("Palindrome \n");
    }
    else
    {
        printf("Not a Palindrome");
    }

    return 0;
}