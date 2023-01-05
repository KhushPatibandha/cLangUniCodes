/*
    WAP to copy one string into another string 
    note(i) with using strcyp
    note(ii) without using strcyp
*/

#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[100], str2[100];
    int len;

    printf("Enter the first string \n");
    gets(str1);

    len = strlen(str1);
    printf("Length of string is %i \n", len);

    printf("String after copy is : \n");
    for(int i = 0; i < len; i++)
    {
        str2[i] = str1[i];
        printf("%c", str2[i]);
    } 
    printf("\n");

    strupr(str2);

    printf("Copying with using string handing function : \n");

    strcpy(str2, str1);
    printf("%s", str2);

    return 0;
}