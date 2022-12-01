#include<stdio.h>
int main(void)
{
    int x1, y1;
    printf("Enter the value of cordinate x1 and y1 \n");
    scanf("%i%i", &x1, &y1);

    if(x1 > 0 && y1 > 0)
    {
        printf("Cordinates lie on 1st plane \n");
    }
    else if(x1 < 0 && y1 > 0)
    {
        printf("Cordinates lie on 2nd plane \n");
    }
    else if(x1 < 0 && y1 < 0)
    {
        printf("Cordinates lie on 3rd plane \n");
    }
    else if(x1 > 0 && y1 < 0)
    {
        printf("Cordinates lie on 4th plane \n");
    }

    else if(x1 != 0 && y1 == 0)
    {
        printf("Cordinates lie on line x \n");
    }
    else
    {
        printf("Cordinates lie on line y \n");
    }
    return 0;
}