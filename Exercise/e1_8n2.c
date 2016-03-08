#include <stdio.h>

int main(void) 
{
    int ch;
    int line = 1;
    int need_print_line = 1;
    while((ch = getchar()) != EOF)
    {
        if (need_print_line)
        {
            printf("%d", line);
        }
        putchar(ch);
        if (ch == '\n')
        {
            line++;
        }
        need_print_line = (ch == '\n');
    }
    return 0;
}

