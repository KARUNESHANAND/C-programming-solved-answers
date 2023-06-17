#include <stdio.h>
int main(int argc, char const *argv[])
{
    float num1 , num2 ;
    float sum , mult  , sub , mod ;
    float div ;

    printf("Enter any two numbers : ");
    scanf("%f%f", &num1, &num2);

    sum = num1 + num2 ;
    sub = num1 - num2 ;
    mult = num1 * num2 ;
    div = num1 / num2 ;
    mod = num1 + num2 ;

    printf("SUM = %f\n", sum);
    printf("SUBTRACTION = %f\n", sub);
    printf("PRODUCT = %f\n", mult);
    printf("QUOTIENT = %f\n", div);
    printf("MODULUS = %f\n", mod);

    return 0;
}
