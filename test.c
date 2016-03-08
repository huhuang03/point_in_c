#include <stdio.h>
void test(int[]);

int main(void) 
{
    int a[10];
    test(a);
    return 0;
}

void test(int *aa) {
    printf("%d", sizeof(aa));
}

