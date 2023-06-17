#include <stdio.h>

int main(int argc, char const *argv[])
{
    float length , breadth , perimeter ;
    
    printf("Enter the length : ");
    scanf("%f", &length);
    printf("Enter the breadth : ");
    scanf("%f", &breadth);

    perimeter=2*(length + breadth);
    printf("perimeter of the rectangle = %f units",perimeter);

    return 0;
}
