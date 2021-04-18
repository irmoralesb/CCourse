#include <stdio.h>

struct {
  int shirtNumber : 6;      // 6 bits
  int approxHeightInFt : 4; // 4 bits
} ronaldo = { 31, 7 };

void main() {
  printf("\n\t  Size: %ld bytes", sizeof(ronaldo));
  printf("\n\t Shirt: %d", ronaldo.shirtNumber);
  printf("\n\tHeight: %d", ronaldo.approxHeightInFt);
  printf("\n\n");
}