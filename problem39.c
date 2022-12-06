#include<stdio.h>
int main(void)
{
    /*
        1 = 31 jan 
        2 = 28 feb 
        3 = 31 march
        4 = 30 april
        5 = 31 may
        6 = 30 june
        7 = 31 july
        8 = 31 aug
        9 = 30 sep
        10 = 31 oct 
        11 = 30 nov
        12 = 31 dec
    */

    int m;
    printf("Enter the number of the month \n");
    scanf("%i", &m);

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        printf("Your month have 31 days \n");    
    }
    else if(m == 2)
    {
        printf("Your month have 28 days and in leap year it have 29 days \n");
    }
    else
    {
        printf("YOur month have 30 days \n");
    }

    return 0;
}