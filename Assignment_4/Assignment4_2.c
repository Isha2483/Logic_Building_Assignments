// 2. Accept an integer from user and determine whether it is even or odd.

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Even number\n");
    }
    else{
        printf("Odd number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}