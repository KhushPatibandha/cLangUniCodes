#include<stdio.h>
int main(void)
{
    int x, y;
    float z;
    double a, b;
    char c; 

    int size = sizeof(x) + sizeof(y) + sizeof(z) + sizeof(a) + sizeof(b) + sizeof(c);
    printf("Total size is %i \n", size);

    return 0;
}