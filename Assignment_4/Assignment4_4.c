// 3. Accept the age of a person and determine whether the person is eligible to vote. A person must be atleast 18 years old to vote. A negative age should be considered invalid.

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int age)
{
    if(age < 0)
    {
        printf("Invalid age\n");
    }
    else if(age >= 18)
    {
        printf("Eligible for voting\n");
    }
    else
    {
        printf("Not eligible for voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}