// c to f

#include <stdio.h>
int main(void)
{
    float c;
    printf("Enter the value of celsius \n");
    scanf("%f", &c);

    float f = (1.8 * c + 32);

    printf("The fahrenheit is %.2f \n", f);

    return 0;
}