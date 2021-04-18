#include <stdio.h>

struct {
  int shirtNumber;      // 4 bytes
  int approxHeightInFt; // 4 bytes
} ronaldo;

struct {
  int shirtNumber : 5;      // 5 bits
  int approxHeightInFt : 3; // 3 bits
} messi;                    // ???

void main() {
  printf("\n\tCristiano: %ld bytes", sizeof(ronaldo));
  printf("\n\t      Leo: %ld bytes", sizeof(messi));
  printf("\n\n");
}