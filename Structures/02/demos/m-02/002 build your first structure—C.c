#include <stdio.h>
#include <string.h>

void main()
{
  struct player {
    int age;
    float height;
    char position[8];
  } lebron, steph, kevin;
  
  lebron.age = 35;
  lebron.height = 2.06;
  strcpy(lebron.position, "PF");
  
  steph.age = 32;
  steph.height = 1.91;
  strcpy(steph.position, "PG");
  
  kevin.age = 31;
  kevin.height = 2.08;
  strcpy(kevin.position, "SF");

  printf("\nLebron James\nAge: %d, Height: %.2f, Position: %s",
    lebron.age, lebron.height,
    strcmp(lebron.position, "PF") == 0 ? "Power Forward" : "NA");

  printf("\n\nSteph Curry\nAge: %d, Height: %.2f, Position: %s",
    steph.age, steph.height,
    strcmp(steph.position, "PG") == 0 ? "Point Guard" : "NA");
    
  printf("\n\nKevin Durant\nAge: %d, Height: %.2f, Position: %s",
    kevin.age, kevin.height,
    strcmp(kevin.position, "SF") == 0 ? "Small Forward" : "NA");
}