#include <stdio.h>

void main() {
  
  int age;
  int *ptr;

  age = 18;
  ptr = &age; // initialize 'ptr' to the ADDRESS of 'age'

  printf("\n\tValue of 'age': %d", age);
  printf("\n\tAddress of 'age': %p", ptr);
  printf("\n\tValue of 'ptr': %d\n\n", *ptr);

}