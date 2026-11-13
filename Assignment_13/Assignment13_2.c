/* 2. Write a program which accepts number from user and return the count of odd digits.

    Input: 2395
    Output : 3

*/

#include<stdio.h>

int CountOdd(int iNo)
{
     if(iNo < 0)
     {
        iNo = -iNo;
     }

    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
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
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;

}