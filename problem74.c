/*
    Write a program to accept a matrix from the user and print its transpose.

    ==
*/

#include<stdio.h>
int main(void)
{
    int row, col;
    printf("Enter the amount of row and col \n");
    scanf("%i%i", &row, &col);

    int matrix[row][col];
    int trans[col][row];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%i", &matrix[row][col]);
        }
    }
    printf("\n");
    
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            trans[j][i] = matrix[i][j];
        }
    }
    printf("\n");

    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row; j++)
        {
            printf("%i ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}