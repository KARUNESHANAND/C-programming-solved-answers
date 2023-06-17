#include <stdio.h>

int main(int argc, char const *argv[])
{
    int side1 , side2 , side3 ;

    printf("Enter three sides of triangle : \n");
    scanf("%d%d%d", &side1 , &side2 , &side3);

    if((side1 + side2 ) > side3)
    {
        if((side2 + side3 ) > side1)
        {
            if((side3 + side1 ) > side2)
            {
                printf("TRIANGLE IS VALID.");
            }
            else
            {
                printf("TRIANGLE IS INVALID");
            }
        }
        else
        {
            printf("TRIANGLE IS INVALID");
        }
    }
    else
    {
        printf("TRIANGLE IS INVALID");
    }
    return 0;
}
