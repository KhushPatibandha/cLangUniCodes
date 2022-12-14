#include<stdio.h>
int main(void)
{
    int count = 0, sum = 0, num;

    while(count < 5)
    {
        scanf("%i", &num);
        sum += num;
        count++;
    }

    printf("sum = %i \n", sum);

    return 0;
}