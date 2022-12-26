#include<stdio.h>
int main(void)
{
    int num[10];
    printf("ENter 10 numbers \n");

    for(int i = 0; i < 10; i++)
    {
        scanf("%i", &num[i]);
    }

    for(int j = 9; j >= 0; j--)
    {
        printf("%i ", num[j]);
    }

    return 0;
}