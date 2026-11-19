/* 5. Write a program which accpts string from user and counts number of white spaces.
    Input: "Marvellous"
    Output: 0

    Input: "Marvellous Infosyatem"
    Output: 1

*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}