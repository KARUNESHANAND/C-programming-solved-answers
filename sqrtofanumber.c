#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double num , root ;

    printf("Enter a number  : ");
    scanf("%lf", &num);

    root = sqrt(num);

    printf("Square root of the number %lf is %lf ", num , root);
    
    return 0;
}
