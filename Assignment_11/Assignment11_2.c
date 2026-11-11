/* 2. Wrie a rprogram which accepts range from user and displays all even numbers in between that range.
    
    Input: 23   35
    Output: 24 26 28 30 32 34

*/

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid range");          
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter staring point: \n");
    scanf("%d",&iValue1);

    printf("Enter ending point: \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);


    return EXIT_SUCCESS;
}