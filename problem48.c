/*
    Write a program in c to calculate a bike's average consumption from the given total 
    distance and spent fuel in liters
*/

#include<stdio.h>
int main(void)
{
    float km, fuelSpent;

    printf("Enter total distance in km \n");
    scanf("%f", &km);

    printf("Enter the total fuel spent \n");
    scanf("%f", &fuelSpent);

    printf("Average consumption (km/lt) is %.02f \n", km/fuelSpent);

    return 0;
}