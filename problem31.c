// Write a program to find the roots of quadratic equation

#include<stdio.h>
#include<math.h>
void main()
{
    int a, b, c, x1, x2;
    printf("Enter a value of a, b, c \n");
    scanf("%i%i%i", &a, &b, &c);

    if(a == 0)
    {
        printf("Invalid");
        return;
    }

    int d = pow(b, 2) + 4*a*c;

    if(d <= 0)
    {
        x1 = -b + sqrt(d)/(2*a);
        x2 = -b - sqrt(d)/(2*a);

        printf("Roots of quadratic equation is %i and %i \n", x1, x2);
    }
    else
    {
        printf("Roots are imaginary \n");
    }
}