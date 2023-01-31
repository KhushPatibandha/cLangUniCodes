#include<stdio.h>
int main(void)
{
    int fact = 1, n;
    
    printf("Enter the number to find its factorial \n");
    scanf("%i", &n);
    // if(n == 0 || n == 1)
    // {
    //     printf("Factorial = %i \n", fact);
    // }

    for(int i = n; i >= 1; i--)
    {
        fact *= i;
    }

    printf("Factorial of %i is %i \n", n, fact);
    return 0;
}