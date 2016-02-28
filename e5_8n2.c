#include <stdio.h>

int func(void)
{
    static int counter = 1;
    int rst = ++counter;
    printf("func return %d\n", rst);
    return rst;
}

int main(void) 
{
    int answer;
    answer = func() - func() * func(); 
    printf("%d\n", answer);
    return 0;
}

