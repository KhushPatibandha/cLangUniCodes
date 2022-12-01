// Enter 5 numbers and disply them with comma between them 

#include<stdio.h>

int main(void)
{
    int a,b,c,d,e;

    printf("Enter 5 numbers : \n");
    scanf("%i%i%i%i%i", &a, &b, &c, &d, &e);

    printf("The numbers are %i, %i, %i, %i, %i", a, b, c, d, e);

    return 0;
}