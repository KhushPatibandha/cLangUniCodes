#include<stdio.h>
int main(void)
{
    float weight, height;

    printf("Enter your weight in kg \n");
    scanf("%f", &weight);

    printf("Enter your height in cm \n");
    scanf("%f", &height);

    if(weight < 50 && height > 170)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Pass\n");
    }

    return 0;
}