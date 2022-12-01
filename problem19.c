#include<stdio.h>
int main(void)
{
    int x, y, max;
    printf("Enter the value of x and y \n");
    scanf("%i%i", &x, &y);

    max = (x > y) ? x : y;

    printf("The maximum value is %i \n", max);
    return 0;
}