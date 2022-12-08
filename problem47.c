#include<stdio.h>
int main(void)
{
    int num, sum = 0;
    printf("Enter 10 numbers \n");

    for(int i = 0; i < 10; i++)
    {
        if(num < 0)
        {
            printf("No negative number \n");
            break;
        }

        scanf("%i", &num);
        sum = sum + num;

    }

    printf("Sum : %i", sum);
    return 0;
}