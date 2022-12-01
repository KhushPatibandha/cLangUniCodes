// Write a program to interchange the value of given to two variable (using third variable)

#include<stdio.h>

int main(void)
{
    int a, b, temp;
    printf("Enter the value a and b : \n");
    scanf("%i%i", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("a = %i \n", a);
    printf("b = %i \n", b);

    return 0;
}