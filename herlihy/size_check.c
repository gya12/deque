
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("sizeof int: %d bytes\n", sizeof(int));
    printf("sizeof unsigned int: %d bytes\n", sizeof(unsigned int));
    printf("sizeof long int: %d bytes\n", sizeof(long int));
    printf("sizeof unsigned long int: %d bytes\n", sizeof(long unsigned int));
    printf("sizeof long long int: %d bytes\n", sizeof(long long int));
    printf("sizeof unsigned long long int: %d bytes\n", sizeof(long long unsigned int));
    printf("sizeof int *: %d bytes\n", sizeof(int *));
    return 0;
}
