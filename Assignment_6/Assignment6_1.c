// 1. Accept the number of electricity units consumed and calculate the total bill usinf the following table slab-wise rates. Each slabk rate applies only to units within that slab.

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int units)
{
    float fBill = 0.0f;

    if(units <= 100)
    {
        fBill = 5 * units;
        printf("Bill = %.2f",fBill);
    }
    else if(units <= 200)
    {
        fBill = (100 * 5) + ((units - 100) * 7);
        printf("Bill = %.2f",fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
        printf("Bill = %.2f",fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
