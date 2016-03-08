#include <stdio.h> 
#include "increment.c"
#include "negate.c"

int main(void) 
{
    printf("incretment for 10: %d, negate for 10: %d\n", increment(10), negate(10));
    printf("incretment for 0: %d, negate for 0: %d\n", increment(0), negate(0));
    printf("incretment for -10: %d, negate for -10: %d\n", increment(-10), negate(-10));
    return 0;
}

