#include <stdio.h>
int main(void)
{
    int quality;
    int price;
    char department[100];
    scanf("%d", &quality);
    scanf("%d", &price);
    scanf("%s", department);
    printf("quality: %d, price: %d, department: %s\n", quality, price, department);
    return 0;
}
