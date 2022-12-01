#include<stdio.h>
#include<math.h>
#define pi 3.14

int main(void)
{
    float radius;
    printf("Enter the value of radius \n");
    scanf("%f", &radius);

    float area = (4 * pi * (pow(radius, 2)));
    float volume = (4 * pi * (pow(radius, 3)))/3;

    printf("The surface area is %.02f and the volume is %.02f \n", area, volume);

    return 0;
}