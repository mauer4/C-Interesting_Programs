#include <stdio.h>
#include <math.h>

// LIST OF FUNCTIONS:
// 1. Power of 2
// 2. Prime Numbers
// 3. Roman Letters
// 4. Day of the Week
// 5. Calendar
// 6. Memory-Swap
// 7. Blobk Structure
// 8. Swap Macro using Block Structure
// 9. printf with %b

#define ISPOWEROF2( n )  ( ! (n & ( n -  1)))

typedef int BOOLEAN; 
#define TRUE 1
#define FALSE 0

  #define SWAP(a, b)  (a ^= b ^= a ^= b)

BOOLEAN IsPrime(int n) /* returns TRUE if prine and FALSE otherwise */
{
  
}

int main(void) {

  /*
  int n = 3;
  do {
    if(ISPOWEROF2(n)) printf("%d is a power of 2\n", n);
    else printf("%d is NOT a power of 2\n", n);
  }
  while( (n = n << 1) < pow(2,10));
  n = 2;
  do {
    if(ISPOWEROF2(n)) printf("%d is a power of 2\n", n);
    else printf("%d is NOT a power of 2\n", n);
  }
  while( (n = n << 1) < pow(2,10));
  */

  /*
  int a = 1, b = 2;
  printf("Originally:\n\t a is --> %d ; b is --> %d\n", a, b );
  SWAP(a, b);
  printf("After swapping:\n\t a is --> %d ; b is --> %d", a, b);
  */

  
  return 0;
}