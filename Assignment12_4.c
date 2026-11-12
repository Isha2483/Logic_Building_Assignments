/* 4. Write a program which accepts number from user and counts frequency of 4 in it.
     
    Input : 2395
    Output: 0

    Input : 9440
    Output: 2 
    
*/

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

   bRet = CountFour(iValue);

   printf("%d",bRet);


    return 0;
}