// 4. Accept an integer and determine whether it is divisible by both 3 and 5, only 3, only 5, or neither

#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iNo)
{
    if((iNo % 3) == 0 && (iNo % 5) == 0)
    {
        printf("Divisible by Both");
    }
    else if((iNo % 3) == 0)
    {
        printf("Divisible by 3 only");
    }
    else if ((iNo % 5) == 0)
    {
        printf("Divisible by 5 only");
    }
    else
    {
        printf("Not Divisible by either");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);


    return EXIT_SUCCESS;
}
