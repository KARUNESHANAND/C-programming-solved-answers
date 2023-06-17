#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch = 'A' ;
    int val = ch + 10 ; // char ch is promoted to int before addition

    printf("val = %d", val);
    
    return 0;
}
