#include <stdio.h>

void main() {
  
  int primeNumbers[] = {3, 7, 11, 17, 19};
  int *primePtr;
  int count = 0;

  primePtr = primeNumbers;

  printf("\n\t#%d: %d\t%d",
    count+1, primeNumbers[count], *primePtr);
 
  printf("\n\n");
}