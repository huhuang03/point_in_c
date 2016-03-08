#include <stdio.h>

int main(void) 
{
    long int i = 12345678790;
    short int j = 1;
    j = i;
    printf("value: %d\n", j);
    return 0;
}

