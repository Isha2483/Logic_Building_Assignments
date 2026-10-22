// 2. A student is eligible for admission if the student's marks are atleast 60 and age is atleast 17 years. Accept both values and determine eligibility. Negative age or marks outside 0-100 must be treated as invalid input.

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float marks, int age)
{
    if((marks < 0 || marks > 100 || age < 0))
    {
        printf("Inavlid input");
    }
    else if((marks >= 60) && (age >= 17))
    {
        printf("Eligible for Admission");
    }
    else
    {
        printf("Not Eligible");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}