#include <stdio.h>

int main(int argc, char const *argv[])
{
    float principle , time , rate , SI ;

    printf("Enter the principle amount : ");
    scanf("%f", &principle);
    printf("Enter the time : ");
    scanf("%f", &time);
    printf("Enter the rate of interest : ");
    scanf("%f", &rate);

    SI = (principle * rate * time ) / 100.0 ;

    printf("SIMPLE INTEREST = %f", SI);

    return 0;
}

