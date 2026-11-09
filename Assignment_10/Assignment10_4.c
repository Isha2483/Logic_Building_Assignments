/* 4. Write a program which accepts temperature in Fahrenheit and convert it into celsius.
    (1 celsius = (Fahrenheit - 32)*(5/9))
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = ((fTemp - 32) * (5.0/9.0));

    return dCelsius;
} 

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is: %.4lf",dRet);

    return 0;
}