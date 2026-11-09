/* 2. Accept amount in US dollar and return its corresponding value in Indan currency.
      Consider 1$ = 70 rupees.
*/

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iRupee = iNo * 70;

    return iRupee;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR id: %d\n",iRet);

    return EXIT_SUCCESS;
}