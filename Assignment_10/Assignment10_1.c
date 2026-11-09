/* 1. Write a program which accepts radius of circle from user and calculate its area.
    Consider value of PI as 3.14 (Area = PI * Radius * Radius)

    Input: 5.3
    Output: 88.2026
*/

#include<stdio.h>

#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %.4lf", dRet);

    return 0;
}
