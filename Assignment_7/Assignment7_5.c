// 5. Write a program which accepts N and prints first 5 multiples of N.

#include<stdio.h>
#include<stdlib.h>

void DisplayMultiples(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Value: ");
    scanf("%d",&iValue);

    DisplayMultiples(iValue);

    return EXIT_SUCCESS;
}