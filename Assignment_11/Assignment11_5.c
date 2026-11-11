/* 5. Wrie a rprogram which accepts range from user and displays all numbers in that range in reverse order.
    
    Input: 23   35
    Output: 35 34 33 32 31 30 29 28 27 26 25 24 23

*/

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
   int iCnt = 0;

   if(iStart > iEnd)
   {
    printf("Invalid range");
   }

   for(iCnt = iEnd; iCnt >= iStart; iCnt--)
   {
    printf("%d\t",iCnt);
   }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter staring point: \n");
    scanf("%d",&iValue1);

    printf("Enter ending point: \n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}