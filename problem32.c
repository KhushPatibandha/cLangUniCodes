#include<stdio.h>
int main(void)
{
    float perc;
    printf("Enter your percentage \n");
    scanf("%f", &perc);

    if(perc  >= 90)
    {
        printf("Grade : A+ \n");
    }
    else if(perc >= 80 && perc < 90)
    {
        printf("Grade : A \n");
    }
    else if(perc >= 70 && perc < 80)
    {
        printf("Grade : B+ \n");
    }
    else if(perc >= 60 && perc < 70)
    {
        printf("Grade : B \n");
    }
    else if(perc >= 50 && perc < 60)
    {
        printf("Grade : C+ \n");
    }
    else if(perc >= 40 && perc < 50)
    {
        printf("Grade : C \n");
    }
    else
    {
        printf("Grade : F \n");
    }

    return 0;
}