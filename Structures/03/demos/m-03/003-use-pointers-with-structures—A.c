#include <stdio.h>
#include <string.h>

void main() {

  struct person {
    char name[32];
    int age;
  };

  struct person my;   
  struct person *ptr;

  ptr = &my;

  strcpy(ptr->name, "AGABA, Philip");
  ptr->age = 31;

  printf("\nName: %s\tAge: %d", ptr->name, my.age);
  printf("\nName: %s\tAge: %d\n\n", my.name, ptr->age);
}