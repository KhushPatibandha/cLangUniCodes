/*
    Write a program to find the largest number of users given nos
*/

#include<stdio.h>
int main(void)
{
    int num, n, largest = 0;
    
    printf("How many numbers would you like to enter \n");
    scanf("%i", &n);

    printf("Enter %i numbers \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%i", &num);

        if(num > largest)
        {
            largest = num;
        }
    }

    printf("Largest number is %i \n", largest);

    return 0;
}