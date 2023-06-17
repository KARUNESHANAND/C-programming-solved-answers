#include <stdio.h>

int main(int argc, char const *argv[])
{
    float base , height , area  ;

   
    printf("Enter the height of the triangle : ");
    scanf("%f", &height );
     printf("Enter the base of the triangle : ");
    scanf("%f", &base );


    area = (1.0 / 2) * base * height  ;
    printf("The Area of the triangle = %f units ", area);

    return 0;
}
