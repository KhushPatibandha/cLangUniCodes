#include<stdio.h>
int main(void)
{
    int x, y;

    printf("Enter the value of x and y \n");
    scanf("%i%i", &x, &y);

    printf("Using AND operator on %i and %i is %i \n", x, y, x&y);
    printf("Using OR operator on %i and %i is %i \n", x, y, x|y);
    printf("Using XOR operator on %i and %i is %i \n", x, y, x^y);
    printf("Using SHIFT right by 2 operator on %i and %i is %i and %i \n", x, y, x >> 2, y >> 2);
    printf("Using SHIFT left by 1 operator on %i is %i \n", y, y << 1);

    return 0;
}