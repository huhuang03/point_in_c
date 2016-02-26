#include <stdio.h>

int main(void) 
{
    int ch;
    int num = 0;
    while ((ch = getchar()) != EOF)
    {
        if ( ch == '{' )
        {
            num++;
        } else if (ch == "}")
        {
            num--;
        }
        if (num < 0)
        {
            puts("not paired");
            exit(EXIT_FAILURE);      
        }
    }
    if (n != 0)
    {
        puts("not paired");
        exit(EXIT_FAILURE);      
    }
    return 0;
}

