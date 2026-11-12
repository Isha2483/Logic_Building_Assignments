/* 3. Write a program which accepts number from user and counts frequency of 2 in it.
     
    Input : 2395
    Output: 1

    Input : 1018
    Output: 0 
    
*/

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

   bRet = CountTwo(iValue);

   printf("%d",bRet);


    return 0;
}