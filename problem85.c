#include<stdio.h>
int main(void)
{
    int n, sum = 0;
    printf("Enter the value of number till you want to find the sum of \n");
    scanf("%i", &n);

    for(int i = 0; i <= n; i++)
    {   
        if(i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("Sum of odd numbers till %i is %i \n", n, sum);
    return 0;
}