// find area and volume 

#include<stdio.h>
int main(void)
{
    float length, breath, height;

    printf("Enter the value of length, breath and height : \n");
    scanf("%f%f%f", &length, &breath, &height);

    float area = 2*(length * breath + breath * height + length * height);
    float volume = (length * breath * height);

    printf("The surface area of the rectangular is %.2f \n", area);
    printf("The volume of the rectangular is %.2f \n", volume);

    return 0;
}