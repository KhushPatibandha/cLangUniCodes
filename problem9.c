#include<stdio.h>
int main(void)
{
    float radius;

    printf("Enter the radius \n");
    scanf("%f", &radius);

    float area = (3.14 * radius * radius);

    printf("The area of the circle is %.2f \n", area);

    return 0;
}