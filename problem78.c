/*
    print half of the string 
*/

#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100];
    int len;

    printf("Enter a string \n");
    gets(str);

    len = strlen(str);

    for(int i = 0; i < len/2; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}