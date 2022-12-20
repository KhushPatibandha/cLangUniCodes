/*
    Write a program to find the second largest no from user given nos.
*/

#include<stdio.h>
int main(void)
{
    int num, n, largest = 0, secLargest = 0;
    
    printf("How many numbers you would like to enter? \n");
    scanf("%i", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%i", &num);

        if(num > largest)
        {
            secLargest = largest;
            largest = num;
        }
        else
        {
            secLargest = num;
        }
    }

    printf("Second largest number is %i \n", secLargest);

    return 0;
}