#include <stdio.h>

int main(int argc, char const *argv[])
{
    float phy , chem , maths , dld , dsa , Average , Total , Percentage ;

    printf("Enter the marks of five subjects : \n");
    scanf("%f%f%f%f%f", &phy ,&chem ,&maths , &dld , &dsa);

    if (phy > 100 || phy < 0 || chem > 100 || chem < 0 || maths > 100 || maths < 0  || dld > 100  || dld < 0 || dsa > 100  || dsa < 0  )
    {
        printf("BHAI DEKH KE TYPE KAR ");
    }
    else
    {
        Total = (phy + chem +  maths +  dld + dsa) ;
        printf("Total of the subjects = %f \n", Total );
        Average = ( (phy + chem +  maths +  dld + dsa) / 5 );
        printf("Average of the subjects = %f \n", Average );
        Percentage = ((phy + chem +  maths +  dld + dsa) / 500.0) * 100.0  ;
        printf(" of the subjects = %f percent ", Percentage  );

    }
    return 0;
}
 