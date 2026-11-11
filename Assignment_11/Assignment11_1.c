/* 1. Wrie a rprogram which accepts range from user and displays all numbers in between that range.
    
    Input: 23   35
    Output: 23 24 25 26 27 28 29 30 31 32 33 34 35

*/

#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid range");          
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
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

    RangeDisplay(iValue1, iValue2);


    return EXIT_SUCCESS;
}