/* 1. Write a program which accepts name from user and prints that name.

     Input: Isha Sanjay Jadhav
     Optput: Isha Sanjay Jadhav
*/

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name: ");

    scanf("%[^\n]s",&Name);

    printf("Your name is %s",Name);

    return 0;
}