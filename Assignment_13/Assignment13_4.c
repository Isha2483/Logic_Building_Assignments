/* 4. Write a program which accepts number from user and return multiplication of all digits.
    Input: 2395
    Output : 270

*/

#include<stdio.h>

int MulDigits(int iNo)
{
     if(iNo < 0)
     {
        iNo = -iNo;
     }

    int iDigit = 0;
    int iMul = 0;
    iMul = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }
        
        iNo = iNo/10;
    }
    return iMul;

   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("%d",iRet);

    return 0;

}