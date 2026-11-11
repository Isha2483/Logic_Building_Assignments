/* 4. Wrie a rprogram which accepts range from user and returns addition of all even numbers in between that range.
    (Rnage should contains positive numbers only)
    
    Input: 23   30
    Output: 108

*/

#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
   int iSum = 0;
   int iCnt = 0;

   if(iStart < 0 || iStart > iEnd)
   {
    printf("Invalid range");
    return -1;
   }

   for(iCnt = iStart; iCnt <= iEnd; iCnt++)
   {
    if(iCnt % 2 == 0)
    {
        iSum = iSum + iCnt;
    }
   }
   return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter staring point: \n");
    scanf("%d",&iValue1);

    printf("Enter ending point: \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet != -1)
    {
         printf("Addition is: %d",iRet);
    }
   


    return EXIT_SUCCESS;
}