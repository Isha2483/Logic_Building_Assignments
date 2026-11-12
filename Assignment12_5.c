/* 5. Write a program which accepts number from user and counts frequency of such a digits which are less than 6.
     
    Input : 2395
    Output: 3

    Input : 96672
    Output: 1 
    
*/

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

   bRet = Count(iValue);

   printf("%d",bRet);


    return 0;
}