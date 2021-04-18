#include <stdio.h>

void main() {
  
  int primeNumbers[] = {3, 7, 11, 17, 19};
  int *primePtr;
  int count;

  for(count=0; count < 5; count++) {

    // initialize the pointer to
    // individual array elements

    primePtr = &primeNumbers[count];

    printf("\n\t#%d: %d\t%d",
      count+1, primeNumbers[count], *primePtr);
  }
 
  printf("\n\n");
}