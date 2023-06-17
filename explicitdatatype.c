#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    float average;
    num1 = 91;
    num2 = 85;
    num3 = 83;

    average = (float)(num1 + num2 + num3) / 3;

    printf("Average = %f", average);

    return 0;
}
