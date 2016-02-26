#include <stdio.h>

int j = 5;

int main(void) 
{
    extern int j;
    printf("value is %d\n", j);
    return 0;
}

