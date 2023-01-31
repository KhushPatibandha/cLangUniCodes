#include<stdio.h>
int main(void)
{
    int num, rev = 0;
    printf("Enter a number to find whether it is palindrome or not \n");
    scanf("%i", &num);

    while(rev < num)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if(rev == num || rev / 10 == num)
    {
        printf("Palindrome \n");
    }
    else
    {
        printf("Not Palindrome \n");
    }
    return 0;
}