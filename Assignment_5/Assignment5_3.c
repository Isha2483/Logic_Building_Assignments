// 3. Accept the marks of a student out of 100 and display the garde according to the following criteria. Marks outside 0-100 are invalid.

#include<stdio.h>
#include<stdlib.h>
void DisplayGrade(float marks)
{
    if((marks >= 0) && (marks <= 100))
    {
        if(marks >= 90)
        {
            printf("Grade A");
        }
        else if(marks >= 75)
        {
            printf("Grade B");
        }
        else if(marks >= 60)
        {
            printf("Grade C");
        }
        else if(marks >= 40)
        {
            printf("Grade D");
        }
        else
        {
            printf("Fail");
        } 
    }
    else
    {
        printf("Invalid Marks");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);
    
    return EXIT_SUCCESS;
}