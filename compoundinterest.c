#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double principle , rate , time , COMPOUND_INTEREST ;
    
    printf("Enter the principle amount : \n");
    scanf("%lf", &principle);
    printf("Enter the rate of interest : \n");
    scanf("%lf", &rate);
    printf("Enter the time of investment : \n");
    scanf("%lf", &time);

    COMPOUND_INTEREST = principle * (pow((1 + rate / 100.0), time));
    printf(" The compound interest amounts to %lf", COMPOUND_INTEREST);

    return 0;
}
