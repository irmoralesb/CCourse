#include <stdio.h>

void main() {
  
  int primeNumbers[] = {3, 7, 11, 17, 19};
  int *primePtr;
  int count;

  // Arrays in C are implicitly implemented
  // through Pointers. Consequently,
  // there's no need for '&' when
  // initializing a pointer to an array.

  primePtr = primeNumbers;

  for(count=0; count < 5; count++) {
    printf("\n\t#%d: %d\t%d",
      count+1, primeNumbers[count], *primePtr);
    primePtr++;
  }
 
  printf("\n\n");
}