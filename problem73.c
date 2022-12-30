#include<stdio.h>
int main(void)
{
    int n, m;
    printf("Enter the value of n and m \n");
    scanf("%i%i", &n, &m);

    int mat1[n][m];
    int mat2[n][m];
    int sumMat[n][m];

    printf("Enter values of first matrix \n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%i", &mat1[i][j]);
        }
    }

    printf("Enter value of second matrix \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%i", &mat2[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            sumMat[i][j] = mat1[i][j] + mat2[i][j];
            printf("%i ", sumMat[i][j]);
        }
        printf("\n");
    }
}