#include<stdio.h>
int main(void)
{
    char currChar;
    printf("Enter a char \n");
    scanf("%c ", &currChar);

    switch(currChar)
    {
        case 'a':
        printf("Vowel \n");
        break;

        case 'e':
        printf("Vowel \n");
        break;

        case 'i':
        printf("Vowel \n");
        break;

        case 'o':
        printf("Vowel \n");
        break;

        case 'u':
        printf("Vowel \n");
        break;

        default:
        printf("Consonant \n");
        break;
    }

    return 0;
}