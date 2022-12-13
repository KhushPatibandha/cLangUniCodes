/*
    Write a program to find the largest number of users given nos
*/

#include<stdio.h>
int main(void)
{
    int n;
    
    printf("How many numbers would you like to enter \n");
    scanf("%i", &n);

    printf("Enter %i numbers of your choice \n", n);
    
    int num[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%i", &num[i]);
    }

    int greatest = num[0];

    for (int i = 0; i < n; i++)
    {
        if(num[i] > greatest)
        {
            greatest = num[i];
        }
    }

    printf("Greatest number is %i \n", greatest);

    return 0;
}