#include<stdio.h>
int main(void)
{
    float km; 

    printf("Enter the value of km \n");
    scanf("%f", &km);

    float kmToM = (km * 1000);
    float kmToIn = (km * 39370);
    float kmToFeet = (km * 3281);

    printf("The value of km to meter is %.2f \n", kmToM);
    printf("The value of km to inches is %.2f \n", kmToIn);
    printf("The value of km to feet is %.2f \n", kmToFeet);

    return 0;
}