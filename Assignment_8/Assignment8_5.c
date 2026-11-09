// 5. Write a program which accepts number from user and display its table in reverse order.

#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 10; iCnt >= iNo; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}