#include <stdio.h>
#include <string.h>

int main(void) 
{
    char line[1000];
    int max_line_num = 0;
    while(gets(line) != NULL) {
        int length = strlen(line);
        if (length > max_line_num)
        {
            max_line_num = length;
            puts("the max length line: ");
            puts(line);
        }
    }
    return 0;
}

