#include <stdio.h>

double cube(double num);

int main()
    {
        int num;
        double c;

        printf("Enter any number: ");
        scanf("%d",&num);

        c = cube(num);
        printf("Cube of %d is %.2f", num , c);

        return 0;
    }

double cube(double num)
{
    double c = num * num * num ;
    return c ;
}    
 

