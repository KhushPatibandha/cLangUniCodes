#include<stdio.h>
#include<math.h>
#define pi 3.14

int main(void)
{
    float degree, radians;

    printf("The the value of angle in degree : \n");
    scanf("%f", &degree);

    radians = (pi * degree) / 180;

    float sine = sin(radians);
    float cosine = cos(radians);

    printf("The value of sine is %.02f \n", sine);
    printf("The value of cosine is %.02f \n", cosine);

    return 0;
}