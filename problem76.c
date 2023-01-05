/*
    WAP to enter a 4 X 4 matrix from user and obtain sum of individual rows and
    individual columns also calculate sum of diagonal elements. 
*/

#include<stdio.h>
int main(void)
{
    int row, col;
    printf("Enter row and col \n");
    scanf("%i%i", &row, &col);

    int matrix[row][col];
    printf("Enter numbers to matrix \n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%i", &matrix[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        
    }

    return 0;
}