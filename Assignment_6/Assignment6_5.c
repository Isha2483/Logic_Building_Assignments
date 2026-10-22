// 5. Accept an employee's monthly salary and completed years of service. Calculate the bonus using these rules:
// more than 10 years of service earns bonus of 15% of monthly salary; 5 to 10 years earns 10%; less than 5 years earns 5%. Salary ust be positive and years od=f service cannnot be negative.

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float salary, int years)
{
    float fBonus = 0.0f;

    if(salary <= 0 && years <= 0)
    {
        printf("Invalid input");
    }
    else if(years > 10)
    {
        fBonus = salary * 0.15;
        printf("Bonus = %.2f",fBonus);
    }
    else if((years >= 5 && years <= 10))
    {
        fBonus = salary * 0.1;
        printf("Bonus = %.2f",fBonus);
    }
    else
    {
        fBonus = salary * 0.5;
        printf("Bonus = %.2f",fBonus);
    }
}

int main()
{
   float fSalary = 0.0f;
   int iYears = 0;
   
   printf("Enter salary and years of service: ");
   scanf("%f %d", &fSalary, &iYears);

   CalculateBonus(fSalary,iYears);

   return EXIT_SUCCESS;
}