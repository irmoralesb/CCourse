#include <stdio.h>

void main() {
  
  int primeNumbers[] = {3, 7, 11, 17, 19};
  int count;

  for(count=0; count < 5; count++) {
    printf("\n\t#%d: %d", count+1, primeNumbers[count]);
  }

  printf("\n\n");
}