/*
    Print:
    * 
    * * 
    * * * 
    * * * * 
    * * * * *
*/

#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the height \n");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}