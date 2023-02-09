#include<stdio.h>
#include<string.h>
void swap(char *x, char *y)
{
    char temp = *y;
    *y = *x;
    *x = temp;
}
void reverse(char str[], int start, int end)
{
    if(start < end)
    {
        swap(&str[start], &str[end]);
        reverse(str, start+1, end-1);
    }
}
int main()
{
    char str[] = "khush";
    reverse(str, 0, strlen(str)-1);
    printf("%s", str);
    return 0;
}  