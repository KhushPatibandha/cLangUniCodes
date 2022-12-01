// swap without using temp var

#include<stdio.h>
int main(void)
{
    int x, y;

    printf("Enter the value of x and y \n");
    scanf("%i%i", &x, &y);

    x = x + y;    
    y = x - y;   
    x = x - y;      

    printf("x = %i \n", x);
    printf("y = %i \n", y);

    return 0;
}