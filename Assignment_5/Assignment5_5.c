// 5. Accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet,digit, or special character. Use character camparisons without using library character-classification functions.

#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Uppercase character");
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("Lowercase character");
    }
    else if((ch >= '0') && (ch <= '9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
}


int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);


    return EXIT_SUCCESS;
}
