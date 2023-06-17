#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double base , expo , power ;

    printf("Enter the base : ");
    scanf("%lf", &base);
    printf("Enter the expo : ");
    scanf("%lf", &expo);

    power = pow(base , expo);

    printf("%.2lf ^ %.2lf = %.2lf", base , expo , power);

    return 0;
}

