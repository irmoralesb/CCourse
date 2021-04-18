#include <stdio.h>

struct {
  char sponsor;
  char designer;
  int number;
} smallShirt;

struct {
  char sponsor;
  int number;
  char designer;
} largeShirt;

void main() {
  printf("\n\tSmall: %ld bytes", sizeof(smallShirt));
  printf("\n\tLarge: %ld bytes\n\n", sizeof(largeShirt));
}