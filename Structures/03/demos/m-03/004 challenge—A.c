#include <stdio.h>

void main() {

  float pie = 3.14;   
  float *ptr = &pie;

  printf("\nusing variable: %p", &pie);
  printf("\n using pointer: %p\n\n", ptr);
}