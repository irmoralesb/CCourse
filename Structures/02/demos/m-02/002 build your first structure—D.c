#include <stdio.h>
#include <string.h>

void main()
{
  struct player {
    int age;
    float height;
    char position[8];
  } lebron = {35, 2.06, "PF"},
    steph = {32, 1.91, "PG"},
    kevin = {31, 2.08, "SF"};
  
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