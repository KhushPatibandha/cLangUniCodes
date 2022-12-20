/*
    Write a program that stops asking number from users when -1 is pressed and show total 
    numbers input by users.

*/

#include<stdio.h>
int main(void)
{
    int num, count = 0;
    
    do
    {
        printf("Enter a number \n");
        scanf("%i", &num);
        if(num != -1)
        {
            count++;
        }

    } while (num != -1);
    
    printf("Numbers entered = %i \n", count);
    return 0;
}