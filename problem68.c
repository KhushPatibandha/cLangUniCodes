/*
    Write a program to accept 10 numbers in an array. Also calculate and print sum
    of those numbers
*/

#include<stdio.h>
int main(void)
{
    int n, sum = 0;

    printf("How many numbers you would like to add to an array \n");
    scanf("%i", &n);

    int arr[n];
    printf("Enter %i numbers to your array \n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all the element in the index is %i \n", sum);
    return 0;
}