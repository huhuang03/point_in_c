#include <stdio.h>
#include <string.h>
void delblank(char string[]);

int main(void) 
{
    delblank("Hi,    Yi  !");
    return 0;
}

void delblank(char string[]) {
    int len = strlen(string);
    printf("lenght: %d\n", len);
    char tmp[len];
    int isBlank = 0;
    int j = 0;
    for (int i = 0; i <= len; i++) {
        if (string[i] == ' ') {
            if (!isBlank) {
                tmp[j++] = string[i];
            }
            isBlank = 1;
        } else {
            isBlank = 0;
            tmp[j++] = string[i];
        }
    }
    printf("after length: %d\n", strlen(tmp));
    printf("after delbalck: %s\n", tmp);
}

