/*Wirte a progrma which acceots number from user and display below pattern.

    Input : 5
    Output: *   *   *   *   *   #   #   #   #   #

*/

#include <stdio.h>
#include <stdlib.h>
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t",iCnt);
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}