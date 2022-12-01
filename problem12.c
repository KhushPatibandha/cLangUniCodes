#include<stdio.h>
int main(void)
{
    int x, num, fd, sd, td;

    printf("Enter a 4 digit number : \n");
    scanf("%i", &num);

    x = num;

    fd = x/1000; // first digit is obtained
    x = x%1000;

    sd = x/100;
    x = x%100;

    td = x/10;
    x = x%10;

    int rnum = (x*1000 + td*100 + sd*10 + fd);
    
    printf("The reversed number is %i \n", rnum);
    
    return 0;
}