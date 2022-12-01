#include<stdio.h>
int main(void)
{
    int a, b, c, max;

    printf("Enter the value of a, b, c \n");
    scanf("%i%i%i", &a, &b, &c);

    max = (a > b) ? a : b;
    max = (c > max) ? c : max;

    printf("Max value is %i \n", max);

    return 0;
}