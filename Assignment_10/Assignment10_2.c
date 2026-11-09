/* 2. Write a program which accepts width and height of rectangle from user and calculate its area.
    Area = Width * Height
*/

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0f;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;
    
    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter height: ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Area of rectangle is: %.3lf",dRet);

    return EXIT_SUCCESS;
}