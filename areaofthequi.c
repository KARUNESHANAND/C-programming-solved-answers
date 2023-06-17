#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double side , area ;

    printf("Enter the side of the equilateral triangle : ");
    scanf("%lf", &side );

    area = ( sqrt(3) / 4 ) * side * side ;
    printf("The area of the Equilateral triangle of side %lf = %lf ", side , area);
    
    return 0;
}
