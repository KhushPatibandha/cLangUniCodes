#include<stdio.h>
int main(void)
{
    float age;

    printf("Enter your age \n");
    scanf("%f", &age);

    if(age >= 18)
    {
        printf("Eligible to vote \n");
    }
    else
    {
        printf("Not Eligible to vote \n");
    }

    return 0;
}