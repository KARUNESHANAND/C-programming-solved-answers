#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num , n , bitstatus ;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Enter nth bit to check (0 - 31) : ");
    scanf("%d", &n);

    bitstatus = (num >> n) & 1 ;

    printf("The %d bit is set to %d ", n , bitstatus);

    return 0;
}
