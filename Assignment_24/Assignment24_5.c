/* 5. Write a program which accepts string from user and reverse that string in place.
    Input: "abcd"
    Output: dcba

    Input: "abba"
    Output: abba


*/

#include<stdio.h>

int StrRev(char *str)
{
   char temp;
   char *start = str;
   char *end = str;
   
   while(*end != '\0')
   {
    end++;
   }
   end--;

   while(start < end)
   {
     temp = *start;
     *start = *end;
     *end = temp;

     start++;
     end--;
   }
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    StrRev(arr);

    printf("Modified string is: %s\n",arr);

   
    return 0;
}