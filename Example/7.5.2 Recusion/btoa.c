#include <stdio.h>
void btoa(unsigned int);

int main(void) 
{
    btoa(11235);
    return 0;
}

void btoa(unsigned int value) {
    unsigned int quotient;
    quotient = value / 10;
    if (quotient > 0) {
        btoa(quotient);
    }
    putchar('0' + value % 10);
}
