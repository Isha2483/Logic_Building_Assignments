/*5. Write a program which accepts number from user and returns difference between summation of all its factors and non factors.
    Input: 12
    Output: -34     (16-50)

*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
           iFactSum = iFactSum + iCnt; 
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }
    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is: %d",iRet);

    return 0;
}