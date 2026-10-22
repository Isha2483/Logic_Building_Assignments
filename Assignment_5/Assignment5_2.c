// 2. Accept a year and determine whether it is a leap year according to Gregorian calendar rules. A yesr is a leap year if it is divisible by 400, or divisible by 4 but not by 100. Consider years less than or equal to zero as invalid.

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int year)
{
    if(year <= 0)
    {
        printf("Invalid year");
    }
    else if(((year % 400) == 0) || ((year % 4) == 0 ) && ((year % 100) != 0))
    {
        printf("%d is a leap year",year);
    }
    else 
    {
        printf("%d is not a leap year",year);
    }

}

int main()
{

    int iYear = 0;

    printf("Enter year: ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}