#include<stdio.h>
int main(void)
{
    int num, sum = 0;
    printf("Enter a number \n");
    scanf("%i", &num);

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum += i;   
        }
    }

    if(sum == num)
    {
        printf("perfect number \n");
    }
    else 
    {
        printf("Not a perfect number \n");
    }
}