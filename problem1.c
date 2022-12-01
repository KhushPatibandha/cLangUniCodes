// find simple interest

#include<stdio.h>

int main(void)
{
    int P;
    int time;
    int interest;

    printf("Enter the value of principle : \n");
    scanf("%i", &P);

    printf("Enter the time in years : \n");
    scanf("%i", &time);
    
    printf("Enter the interest in precent : \n");
    scanf("%i", &interest);

    int total = (P * interest * time)/100;

    printf("The total interest is %i \n", total);
    return 0;
}