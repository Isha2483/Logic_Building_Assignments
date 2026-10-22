// 1. Check whether a number is positive or negative

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive number\n");
    }
    else
    {
        printf("Negative number\n");
    }
}
int main()
{

    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}