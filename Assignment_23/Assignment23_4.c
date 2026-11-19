/* 4. Write a program which accpts string from user and display only digits from that string.

    Input: "marve89llous121"
    Output: 89121

*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >='0' && *str <='9')
        {
            printf("%c",*str);
            
        }
        iCount++;
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}