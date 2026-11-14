/* 2. Write a program which accepts one number from user and check whether that number is greayer than 100 or not.
    Input: 101
    Output: Greater
*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == 1)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}