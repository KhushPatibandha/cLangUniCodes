#include<stdio.h>
#include<math.h>

int main(void)
{
    float initialVel, acc;
    float time = 10;

    printf("Enter the value of inital velocity and acceleration \n");
    scanf("%f%f", &initialVel, &acc);

    float dis = (acc * (pow(time, 2))/2) + (initialVel * time);

    printf("The distance coverd in time %.02f second is %.02f \n", time, dis);

    return 0;
}