#include<stdio.h>

int main(void)
{
    int x, y;

    printf("Enter the value of x and y \n");
    scanf("%i%i", &x, &y);

    int mul = x * y;

    printf("The mul of %i and %i is %i", x, y, mul);
}