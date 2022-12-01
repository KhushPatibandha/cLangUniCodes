#include<stdio.h>
int main(void)
{
    int x, y, z, t;
    z = 1;

    y = 6;  // y = 6

    x = y--;  // x = 6 , y = 5

    x = x++;  // x = 7, y = 5

    x = ++y;  // x = 6 , y = 6

    t = z++ + ++y;  // let z = 1, t = 1 + 7 = 8 , z = 2

    t += 8;  // t = 16

    t = z++ + ++z;  // t = 3 + 3 = 6 , z = 4

    printf("The value of x = %d, y = %d, z = %d, t = %d \n", x, y, z, t);

    return 0;
}