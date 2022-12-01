#include<stdio.h>
int main(void)
{
    int num, x, fd, sd, td, fud;
    printf("Enter the 5 digit number \n");
    scanf("%i", &num);

    x = num;  // 12345
    fd = x/10000; // 1
    x = x%10000; // 2345

    sd = x/1000;  // 2
    x = x%1000; // 345

    td = x/100;  // 3
    x = x%100; // 45
    
    fud = x/10;
    x = x%10;

    int addNum = (fd + sd + td + fud + x);
    
    printf("Addition of 5 digits are %i \n", addNum);

    return 0;
}