#include <stdio.h>

int main(int argc, char const *argv[])
{
    float length , breadth , area ;

    printf("Enter the length : ");
    scanf("%f", &length);
    printf("Enter the breadth : ");
    scanf("%f", &breadth);

    area = length * breadth ;
    printf("The area of the rectangle is %f", area);

    return 0;
}
