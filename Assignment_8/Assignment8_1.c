/* 1. Write a program which acce[ts a number from user and if number is less than 50 then prints small, 
    if it is greater than 50 amd less than 100 then prints medium, if it is graeater than 100 then prints large.
*/

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small\n");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);



    return EXIT_SUCCESS;
}