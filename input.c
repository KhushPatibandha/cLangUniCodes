#include<stdio.h>

int main(void)
{
    float num1;
    float num2;

    printf("Enter the value of number 1 and number 2 \n");
    scanf("%f%f", &num1, &num2);

    float sum = num1 + num2;

    printf("THe sum is %f \n", sum);
    return 0;
}