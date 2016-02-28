#include <stdio.h>

char *find_char(char const *source, char const * chars);

int main(void) 
{
    char* source = "ABCDEF";
    char* chars = "XRCQEF";
    char* rst = find_char(source, chars);
    if (rst == NULL) {
        printf("Can't find\n");
    } else {
        printf("find: %c\n", *rst);
    }
    return 0;
}

char *find_char(char const* source, char const * chars)
{
    if (source == NULL || chars == NULL) {
        return NULL;  
    }
    if (*source == '\0' || *chars == '\0') {
        return NULL;
    }
    char* s = source;
    char* c = chars;
    while (*s != '\0')
    {
        printf("outter: %c\n", *s);
        while (*c != '\0')
        {
            printf("\tinner: %c\n", *c);
            if (*c == *s) {
                return s;
            }
            c++;
        }
        s++;
    }
    return NULL;
}

