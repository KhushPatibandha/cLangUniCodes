#include<stdio.h>
int main(void)
{
    int n, largest, SecondLargest, num;
    printf("How many numbers would you like to enter? \n");
    scanf("%i", &n);

    printf("Enter %i numbers \n", n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%i", &num);
        if(i == 1)
        {
            largest = num;
            SecondLargest = num;
        }
        if(num > largest)
        {
            SecondLargest = largest;
            largest = num;
        }
    } 

    printf("Largest and second Largest numbers are %i and %i \n", largest, SecondLargest);
    return 0;
}