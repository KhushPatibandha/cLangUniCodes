#include<stdio.h>
int main(void)
{
    int a, b, c, max;

    printf("Enter the value of x, y and z \n");
    scanf("%i%i%i", &a, &b, &c);

    // max = (a > b) ? a : b;
    // max = (c > max) ? c : max;

    if(a > b && b > c)
    {
        printf("a is max \n");
    }
    else if(b > a && a > c)
    {
        printf("b is max \n");
    }
    else
    {
        printf("c is max \n");
    }

    return 0;
}