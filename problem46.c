#include<stdio.h>
int main(void)
{
    char currChar;

    printf("Enter a char in lower or higher case \n");
    scanf("%c", &currChar);

    int a = (int) currChar; 

    switch(a)
    {
        case 1 : (a >= 65);
        printf("Upper case \n");

        case 2 : (a <= 90);
        printf("Upper case \n");

        default:
        printf("Lower case \n");
    }

    return 0;
}