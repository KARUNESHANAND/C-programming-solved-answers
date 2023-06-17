#include <stdio.h>

int main(int argc, char const *argv[])
{
    double num1 , num2 ;

    printf("Enter two numbers: ");
    scanf("%ld%ld", &num1 , &num2);

    if (num1 > num2)
    {
        printf("%ld is maximum", num1);
    }

    if (num2 > num1)
    {
        printf("%ld is maximum", num2);
    }
    
    if (num1 == num2)
    {
        printf("Both are equal");
    }
    
    return 0;
}
