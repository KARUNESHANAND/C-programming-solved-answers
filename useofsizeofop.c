#include <stdio.h>

int main(int argc, char const *argv[])
{
    int integerVar ;

    printf("Size of char = %d\n", sizeof(char));
    printf("Size of int = %d\n", sizeof(integerVar));
    printf("Size of expression (3 + 2.5) = %d\n", sizeof(3 + 2.5));
    
    return 0;
}
