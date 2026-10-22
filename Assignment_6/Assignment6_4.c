// 4. Accept three integer vlaues representing the lengths of the sides of a triangle. Determine whether they can form a valid triangle. All sides must be positive, and sum of any two sides must be greater than third side.

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 <= 0) || (iSide2 <= 0) || (iSide3 <= 0))
    {
        printf("Invalid sides");
    }
    else if(((iSide1 + iSide2) > iSide3) && ((iSide1 + iSide3) > iSide3) && ((iSide2 + iSide3) > iSide1))
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    

}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);
    
    return EXIT_SUCCESS;
}