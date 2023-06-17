#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float radius , diameter , area , perimeter ;

    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);
    
    area = 2 * M_PI * radius * radius ;
    printf("Area of the circle = %.2f ", area);
    perimeter = 2 * M_PI * radius ;
    printf("Perimeter of the circle = %.3f  ", perimeter);
    diameter = 2*radius ;
    printf("Diameter of the circle = %.4f  ", diameter);

    return 0;
}
