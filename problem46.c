#include<stdio.h>
int main(void)
{
    char currChar;

    printf("Enter a char in lower or higher case \n");
    scanf("%c", &currChar);

    int a = (int) currChar; 

    printf("%i %c \n", a, currChar);
    
    if(a >= 65 && a <= 90)
    {
        a = 1;
    }
    else
    {
        a = 2;
    }

    switch(a)
    {
        case 1 : printf("Upper case \n");
        break;
        
        case 2: printf("Lower case \n");
        break;
    }

    return 0;
}