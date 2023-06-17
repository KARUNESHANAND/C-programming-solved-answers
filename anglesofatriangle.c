#include <stdio.h>

int main()
{
    float a , b , c ;

    printf("Enter two agles of a triangle : ");
    scanf("%f%f", &a , &b);

    c = 180 - (a + b);

    printf("Third angle of a triangle = %f", c);

    return 0;
}