#include<stdio.h>
int main(void)
{
    int ID;
    char name[20];
    float unit, bill, surcharge = 0;

    printf("Enter your name and ID \n");
    scanf("%s%i", &name, &ID);

    printf("Enter your units \n");
    scanf("%f", &unit);

    if(unit <= 199)
    {
        bill = unit * 1.2;
    }
    else if(unit >= 200 && unit <= 400)
    {
        bill = unit * 1.5;
    }
    else if(unit >= 400 && unit <= 600)
    {
        bill = unit * 1.8;
    }
    else
    {
        bill = unit * 2;
    }

    if(bill >= 400)
    {
        surcharge = bill * 0.15;
        bill += surcharge;
    }
    else if(bill < 100)
    {
        bill = 100;
    }

    printf("ID : %i \n", ID);
    printf("Name : %s \n", name);
    printf("Units : %.2f \n", unit);
    printf("Bill : %.2f with surcharge amount : %.2f \n", bill, surcharge);

    return 0;
}