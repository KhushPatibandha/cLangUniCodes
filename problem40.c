#include<stdio.h>
int main(void)
{
    int mon;
    printf("Enter the number of your month \n");
    scanf("%i", &mon);

    switch(mon)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 days \n");
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 days \n");
        break;

        case 2:
        printf("28 days \n");
        break;

        default:
        printf("Enter correct number \n");
        break;;
    }

    return 0;
}