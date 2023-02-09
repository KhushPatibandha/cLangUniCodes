#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[] = "khush";
    // char str[] = "naman";
    int start = 0;
    int end = strlen(str)-1;
    while(start <= end)
    {
        if(str[start] != str[end])
        {
            // return false;
            printf("Not a palindrome");
            break;
        }
        else
        {
            start++;
            end--;
        }
        if(start == end)
        {
            printf("Palindrome");
        }
    }
    return 0;
}