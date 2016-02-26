#include <stdio.h>
int main(void)
{
    char input[10];
    while(gets(input) != NULL) {
        puts(input);
    }
    return 0;
}
