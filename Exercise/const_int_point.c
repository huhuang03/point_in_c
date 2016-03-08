#include <stdio.h>

int main(void) 
{
    const int i = 1;
    const int j = 2;
    int const *p_to_const_int = &i;
    p_to_const_int = &j;
    printf("value is: %i\n", *p_to_const_int);

    int k = 3;
    int * const const_point_to_int = &k;
    *const_point_to_int = 4;
    printf("value is %i\n", *const_point_to_int);
    return 0;
}

