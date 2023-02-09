#include<stdio.h>
#include<string.h>
int main(void)
{
    // char str[] = "jainil";
    // int len = strlen(str);
    // for(int i = 0; i < len; i++)
    // {
    //     if(str[i] >= 65 && str[i] <= 90)
    //     {
    //         printf("%c", str[i]);
    //     }
    //     else
    //     {
    //         str[i] = str[i]-32;
    //         printf("%c", str[i]);
    //     }
    // }

    // int length = 0;
    // for(int i = 1; i <= '\0'; i++)
    // {
    //     length++;
    // }
    // printf("%i", length);


    char str[] = "khush";
    int i = 0, length = 0;
    while(str[i] != '\0')
    {
        length++;
        i++;
    }
    printf("%i", length);
}