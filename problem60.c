/*
    find the factors of a number using for loop 
*/

#include<stdio.h>
int main(void)
{
    int num = 10;

    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("Factors : %i \n", i);
        }
    }

    return 0;
}