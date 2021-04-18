#include <stdio.h>
#include <string.h>

struct player {
  char name[32];
  char position;
  char team[32];
};

char *describe_position(struct player p) {
  switch(p.position) {
    case 'Q':
      return("Quarterback");
    case 'R':
      return("Running Back");
    case 'F':
      return("Full Back");
    case 'O':
      return("Offensive Line");
    case 'W':
      return("Wide Receiver");
    default:
      return("Punter");
  }
}

void main()
{
  struct player jock;

  strcpy(jock.name, "Lamar Jackson");
  jock.position = 'Q';
  strcpy(jock.team, "Ravens");

  printf("\n  %s, ranked #%d, is a %s '%s'",
    jock.name, 1, jock.team, describe_position(jock));
}