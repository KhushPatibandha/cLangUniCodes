#include<stdio.h>
int main(void)
{
    int num, i = 1, sum = 0;
    printf("Enter your number \n");
    scanf("%i", &num);

    while(i <= num/2)
    {
        if(num % i == 0)
        {
            sum += i;
            i++;
        }
    }
    
    if(sum == num)
    {
        printf("Perfect number \n");
    }
    else
    {
        printf("Not a perfect number \n");
    }

    return 0;
}