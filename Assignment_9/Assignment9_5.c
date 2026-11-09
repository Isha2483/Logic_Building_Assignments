/* 5. Write i program which returns differnece between Even factorial and Odd Factorial of given number.
    Input: 5
    Output: -7     (8 - 15)

*/

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int EvenFact = 0;
    int OddFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, EvenFact = 1, OddFact = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            EvenFact = EvenFact * iCnt;
        }
        else
        {
            OddFact = OddFact * iCnt;
        }
    }
    return (EvenFact - OddFact);
}

 int main()
 {

    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Fctorial difference is: %d",iRet);

    return EXIT_SUCCESS;
 }
