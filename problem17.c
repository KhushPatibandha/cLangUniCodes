#include<stdio.h>
#include<math.h>
#define pi 3.14

int main(void)
{
    float x, y;
    printf("Enter the value of x and y \n");
    scanf("%f%f", &x, &y);

    float z = sqrt((pow(x, 2)) + (pow(y, 2)));

    printf("The third side is %.02f \n", z);

    float angle1 = (180 * asin(y/z))/pi;
    float angle2 = (180 * asin(x/z))/pi;

    printf("The value of angle 1 in degree is %.02f \n", angle1);
    printf("The value of angle 2 in degree is %.02f \n", angle2);

    return 0;
}