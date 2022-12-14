/*
    Reverse a number with while loop
*/

#include<stdio.h>
int main(void)
{
    int num, i;

    printf("Enter a Three digit number \n");
    scanf("%i", &num);

    int reverse = 0;
    
    while(num > 0)
    {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    printf("Reverse = %i \n", reverse);
    printf("Num : %i \n", num);

    return 0;
}