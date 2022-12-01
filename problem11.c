#include<stdio.h>
int main(void)
{
    int x, y;

    printf("Enter the value of x and y \n");
    scanf("%i%i", &x, &y);

    printf("The Addition of %i and %i is %i \n", x, y, x+y);
    printf("Subtraction of %i and %i is %i \n", x, y, x-y);
    printf("Multiplication of %i and %i is %i \n", x, y, x*y);
    printf("Division of %i and %i is %i \n", x, y, x/y);
    printf("Modulp division of %i and %i is %i \n", x, y, x%y);

    return 0;
}