#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Sprinter {
  unsigned int lane : 4;
  unsigned int distance : 8;
  char name[32];
};

int main () {    
  FILE *fh;
  const char filename[] = "race.txt";
  struct Sprinter athlete;

  fh = fopen(filename, "r");
  if (fh == NULL) {
    fprintf(stderr, "\n\tError opening file.\n\n");
    exit (1);
  }

  while(fread(&athlete, sizeof(struct Sprinter), 1, fh))
    printf ("\nName: %s\nLane: %d\nDistance: %d\n\n",
      athlete.name, athlete.lane, athlete.distance);
  
  fclose (fh);
}