#include<stdio.h>
int main(void)
{
    int n, m, sum = 0;

    printf("Enter the number of n and m \n");
    scanf("%i%i", &n, &m);

    int arr[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%i", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%i ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Sum of all element is %i \n", sum);
    return 0;
}