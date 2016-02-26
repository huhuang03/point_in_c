#include <stdio.h>

int main(void) 
{
    enum Liquid {OUNCE = 1};
    enum Liquid jar = OUNCE;
    printf("value: %s", jar);
    return 0;
}

