/* 4. Write a program which accepts number from user and return difference between summation of Even digits and summation of odd digits.
    Input: 2395
    Output : -15   (2 - 17)

*/

#include<stdio.h>

int CountDiff(int iNo)
{
     if(iNo < 0)
     {
        iNo = -iNo;
     }

    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo/10;
    }
   
    iDiff = iSumEven - iSumOdd;

    return iDiff;

   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;

}