/*
    Write a program to accept 5 numbers in an array and find out the maximum and
    minimum number out of those
*/

#include<stdio.h>
int main(void)
{
    int n;
    printf("How many numbers you would like to enter \n");
    scanf("%i", &n);

    int arr[n];
    printf("Enter %i numbers \n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[i - 1])
        {
            max = arr[i];
        }
        else
        {
            min = arr[i];
        }
    }

    printf("Max : %i and Min : %i \n", max, min);

    return 0;
}