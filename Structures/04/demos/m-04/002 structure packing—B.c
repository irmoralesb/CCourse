#include <stdio.h>
#pragma pack(1)

struct {
  char sponsor;
  char designer;
  int number;
} smallShirt;  // 8 - 6 = 2 bytes of ram wasted

struct {
  char sponsor;
  int number;
  char designer;
} largeShirt;  // 12 - 6 = 6 bytes of ram wasted

void main() {
  printf("\n\tSmall: %ld bytes", sizeof(smallShirt));
  printf("\n\tLarge: %ld bytes\n\n", sizeof(largeShirt));
}