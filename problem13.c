#include<stdio.h>
#include<math.h>

int main(void)
{
    int x1, y1, x2, y2;

    printf("Enter the value of x1 and y1 \n");
    scanf("%i%i", &x1, &y1);

    printf("Enter the value of x2 and y2 \n");
    scanf("%i%i", &x2, &y2);

    float dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between two point on x-y plane is %f \n", dis);
    
    return 0;
}