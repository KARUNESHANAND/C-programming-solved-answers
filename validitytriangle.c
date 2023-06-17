#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    double angle1 , angle2 , angle3 , sum , side1 , side2 , side3  ;

    printf("Enter the three angles of a triangle : \n");
    scanf("%lf%lf%lf", &angle1 , &angle2 , &angle3);
    printf("Enter the three sides of a triangle : \n");
    scanf("%lf%lf%lf", &side1 , &side2 , &side3);

    sum = angle1 + angle2 + angle3 ;

    if(sum==180 && angle1 > 0 && angle2 > 0 && angle3 > 0  && (side1 + side2 >= side3)  && (side1 + side3 >= side2)  && (side2 + side3 > side1))
    {
        printf("FUCKING VALID😁😀");
    } 
    else
    {
        printf("FOR FUCK'S SAKE IT'S inVALID");
    }
    
    return 0;
}
