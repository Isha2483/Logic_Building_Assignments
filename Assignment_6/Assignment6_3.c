// 3. Accept the total purchase amount and calculate the final payable amount after applyting the following discount. Negative purchase amounts are invalid.

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float amount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(amount < 0)
    {
        printf("Inavlid amount");
    }
    else if(amount < 1000)
    {
        printf("Payable Amount = %.2f",amount);
    }
    else if(amount >= 1000 && amount < 5000)
    {
        fDiscount = amount * 0.1;
        fFinalAmount = amount - fDiscount;
        printf("Payable Amount = %.2f",fFinalAmount);
    }
    else
    {
        fDiscount = amount * 0.2;
        fFinalAmount = amount - fDiscount;
        printf("Payable Amount = %.2f",fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enetr purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);
    
    return EXIT_SUCCESS;
}