#include <stdio.h>
#include <stdbool.h>

void
print_binary(unsigned int num, int count)
{
  bool bit;
	
  bit = num % 2;
  num >>= 1;
  if (--count)
    binary(num, count);
  printf("%d", bit);
}

int
main(void) {
  print_binary(2147483642, sizeof(unsigned int) * 8);
  printf("\n");
  /* prints "01111111111111111111111111111010" */
  
  print_binary(1 << 31, sizeof(unsigned int) * 8);
  printf("\n");
  /* prints "10000000000000000000000000000000" */
  
  print_binary(-1, sizeof(unsigned int) * 8);
  printf("\n");
  /* prints "11111111111111111111111111111111" */
  
  print_binary(0, sizeof(unsigned int) * 8);
  printf("\n");
  /* prints "00000000000000000000000000000000" */
  
  print_binary(1, sizeof(unsigned int) * 8);
  printf("\n");
  /* prints "00000000000000000000000000000001" */

  print_binary(28374421, sizeof(unsigned int) * 8);
  printf("\n");
  /* prints "00000001101100001111010110010101" */
  
  return 0;
}
