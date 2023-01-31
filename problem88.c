#include<stdio.h>
int main(void)
{
    int a = 0, b = 1, n;
    printf("How many numbers would you like to print for fibo series \n");
    scanf("%i", &n);

    printf("%i ", a);
    printf("%i ", b);
    for(int i = 3; i <= n; i++)
    {
        int temp = b;
        b = a + b;
        a = temp;
        printf("%i ", b);
    }
    return 0;
}