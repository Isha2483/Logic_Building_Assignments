/* Write a progrm to find even factorial of given number
    Input : 5
    Output: 8     (4 * 2)
*/

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iFact = 0;

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}


int main()
{
    int iValue = 0,  iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is: %d",iRet);


    return EXIT_SUCCESS;
}