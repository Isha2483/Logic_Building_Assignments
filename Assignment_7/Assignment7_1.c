/* 1. Write a program which accepts number from user and print that number of $ and * on screen

    Input: 5
    Output: $ * $ * $ * $ * $ *

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue  = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}