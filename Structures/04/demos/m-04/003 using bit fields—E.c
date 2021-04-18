#include <stdio.h>

struct {
  unsigned int shirtNumber : 5;      // 5 bits
  unsigned int approxHeightInFt : 3; // 3 bits
} ronaldo = { 31, 7 };

void main() {
  printf("\n\t  Size: %ld bytes", sizeof(ronaldo));
  printf("\n\t Shirt: %d", ronaldo.shirtNumber);
  printf("\n\tHeight: %d", ronaldo.approxHeightInFt);
  printf("\n\n");
}