/*
    Print:
    1 
    2 3 
    4 5 6 
    7 8 9 10  
*/

#include<stdio.h>
int main(void)
{
    int n, k = 1;
    printf("Enter the height \n");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%i ", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}