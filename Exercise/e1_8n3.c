
#include <stdio.h>

int main(void) 
{
    char ch = 0;;
    signed char checksum = 0;
    while((ch = getchar()) != EOF)
    {
        checksum += ch;
        if (ch == '\n')
        {
            printf("%d\n", checksum);
            checksum = 0;
        }  
    }
    return 0;
}

