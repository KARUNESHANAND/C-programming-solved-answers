#include <stdio.h>

int main(int argc, char const *argv[])
{
    double side1 , side2 , side3 ;

    printf("Enter the three sides of the triangle : \n");
    scanf("%lf%lf%lf", &side1, &side2 , &side3);

    if(side1 == side2 && side2 == side3)
    {
        printf("EQUILATERAL TRIANGLE");

    }
    else if(side1 == side2 || side2 == side3 || side3 == side1 )
    {
        printf("ISOCELES TRIANGLE");

    }
    else
    {
        printf("SCALENE TRIANGLE");

    }
    

    return 0;
}
