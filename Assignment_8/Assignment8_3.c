// 3. Write a program to find factorial of a number

#include<stdio.h>
#include<stdlib.h>

long long Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    long long  iFact = 0;

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact; 
}

int main()
{
    int iValue = 0;
    long long iRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is: %lld\n", iRet);

    return EXIT_SUCCESS;
}