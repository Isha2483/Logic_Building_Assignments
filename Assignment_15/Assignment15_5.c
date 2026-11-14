/* 5. Write a program which accepts total marks and obtained marks from user and calculate percentage.
    Input: 1000   745
    Output: 74.5%
*/

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float percent = 0.0f;
    
    percent = (float)iNo2 / (float)iNo1 * 100;

    return percent;
}



int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks: ");
    scanf("%d", &iValue1);

    printf("Enter obtained marks: ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.1f%%",fRet);
  
    return 0;
}