#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    int num1 , num2 , max ;

    printf("enter two numbers: ");
    scanf("%d%d", &num1 , &num2);

    max = (num1 > num2) ? num1 : num2 ;
    printf("maximum of two numbers between %d and %d is %d", num1 , num2 , max);

    return 0;
}
