#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// lanes run from 1 through 8 (4 bits required)
// distances are 50m, 100m, 200m (8 bits needed)

struct Sprinter {
  unsigned int lane : 4;
  unsigned int distance : 8;
  char name[32];
};

int main () {

  const char filename[] = "race.txt";
  FILE *fh;

  unsigned int lane;
  unsigned int distance;
  char name[32];

  // open and create the file
  fh = fopen(filename, "a");

  if (fh == NULL) {
    fprintf(stderr, "\nError opening file.\n");
    exit(1);
  }

  // Prompt for input
  printf("\n\t    Name? ");
  scanf("%s", name);

  printf("\t    Lane? ");
  scanf("%d", &lane);

  printf("\tDistance? ");
  scanf("%d", &distance);

  // Build the structure object
  struct Sprinter athlete;
  strcpy(athlete.name, name);
  athlete.lane = lane;
  athlete.distance = distance;

  // Write the file
  fwrite(&athlete, sizeof(struct Sprinter), 1, fh);

  if(fwrite != 0)
    printf("\n\tFile saved.\n\n");
  else
    printf("\n\tError writing file.\n\n");

  // close file handle
  fclose(fh);
}