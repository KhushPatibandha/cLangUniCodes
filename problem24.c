// Write a program to find roots of quadratic equation where a = 3, b = 8, c = 2

#include<stdio.h>
#include<math.h>

void main()
{
    int a = 1, b = -7, c = 12;
    int d;

    if(a == 0)
    {
        printf("Invalid");
        return;
    }

    d = b * b - 4 * a * c;
    float sqrtVal = sqrt(d);

    if(d > 0)
    {
        printf("Roots are %.02f and %.02f \n", ((-b + sqrtVal)/(2*a)), ((-b - sqrtVal)/(2*a)));
    }
    else if(d == 0)
    {
        printf("Roots are %.02f and %.02f \n", (-b/(2*a)), (-b/(2*a)));
    }
    else
    {
        printf("%f%f + i%f\n%f - i%f", (-b/(2*a)), sqrtVal/(2*a), (-b/(2*a)), sqrtVal/(2*a));
    }
}