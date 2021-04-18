#include <stdio.h>

void main() {
  
  int primeNumbers[] = {3, 7, 11, 17, 19};
  int *primePtr;
  int count;

  primePtr = primeNumbers;

  for(count=0; count < 5; count++) {
    printf("\n\t #%d. Pointer + %d: %d",
      count+1, count, *(primePtr+count));
  }
 
  printf("\n\n");
}