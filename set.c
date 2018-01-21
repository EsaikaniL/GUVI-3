#include <stdio.h>
int main()
{
 int base=5, exponent=9;
 int result = 1;
 printf("base number: ");
  printf("Enter an exponent: ");
  while (exponent != 0)
    {
      result *= base;
        --exponent;
    }
 printf("Answer = %d", result);   
}
}
