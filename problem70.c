#include<stdio.h>
int main(void)
{
    int pos = 0, neg = 0, zero = 0;
    int m, n;
    printf("Enter the value of m and n \n");
    scanf("%i%i", &m, &n);
    int data[m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%i", &data[i][j]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(data[i][j] > 0)
            {
                pos++;
            }
            else if(data[i][j] == 0)
            {
                zero++;
            }
            else
            {
                neg++;
            }
        }
    }

    printf("Pos count : %i \n", pos);
    printf("Neg count : %i \n", neg);
    printf("Zero count : %i \n", zero);

    return 0;
}