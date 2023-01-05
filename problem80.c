#include<stdio.h>

// void add(int, int);

void add(int x, int y)
{
    printf("Addition is %i \n", x+y);
}

int main(void)
{
    int a = 10, b = 10;
    add(a, b);

    return 0;
}