#include<stdio.h>

int main(void)
{
    int a, b, c, d, e;

    printf("Enter the five numbers : \n");
    scanf("%i%i%i%i%i", &a, &b, &c, &d, &e);

    int sum = (a+b+c+d+e);

    int average = (a+b+c+d+e)/5;

    printf("The sum is %i \n", sum);
    printf("The average of %i, %i, %i, %i, %i is %i \n", a, b, c, d, e, average);

    return 0;
}