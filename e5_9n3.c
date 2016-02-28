#include <stdio.h>

unsigned int reverse_bits(unsigned int value);

void print_bytes(int object)
{
  size_t i;

  printf("[ ");
  for(i = 0; i < 32; i++)
  {
   // printf("%02x ", ((const unsigned char *) object)[i] & 0xff);
    printf("%d", (object >> (31 -i)) & 1);
  }
  printf("]\n");
}

int main(void) 
{
    int i = 25;
    print_bytes(i);
    int rst = reverse_bits(i);
    printf("rst: %u\n", rst);
    print_bytes(rst);
    return 0;
}

unsigned int reverse_bits(unsigned int value)
{
    int first_is_one = value & (1 << 31);
    int last_is_one = value & 1;
    if (first_is_one) {
        value |= 1;
    } else {
        value &= ~1;
    }
    if (last_is_one) {
        value |= (1 << 31);
    } else {
        value &= (~(1 << 31));
    }
    return value;
}
