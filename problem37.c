#include<stdio.h>
int main(void)
{
    int angle1, angle2, angle3;
    printf("Enter the value of three angles \n");
    scanf("%i%i%i", &angle1, &angle2, &angle3);

    if(angle1 == angle2 && angle2 == angle3)
    {
        printf("Triangle is equilateral \n");
    }

    else if(angle1 == angle2 || angle2 == angle3 || angle1 == angle3)
    {
        printf("Triabgle is isoceles \n");
    }
    
    else 
    {
        printf("Triangle is scalene \n");
    }

    return 0;
}