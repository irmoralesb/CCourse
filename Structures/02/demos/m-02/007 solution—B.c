#include <stdio.h>
#include <string.h>

struct date {
  char month[3];
  int year;
};

struct person {
  struct date birth;
  struct date death;
  char name[32];
  char country[32];
  char knownFor[32];
};

void main() {
  struct person outlier[4];
  struct person temp;
  int count;
  
  // Johannes Gutenberg
  
  strcpy(outlier[0].name, "Johannes Gutenberg");
  strcpy(outlier[0].birth.month, "JAN");
  outlier[0].birth.year = 1400;
  strcpy(outlier[0].death.month, "FEB");
  outlier[0].death.year = 1468;
  strcpy(outlier[0].country, "Germany");
  strcpy(outlier[0].knownFor, "Modern Printing Press");
  
  // Elizabeth Cady Stanton
  
  strcpy(outlier[1].name, "Elizabeth Stanton");
  strcpy(outlier[1].birth.month, "NOV");
  outlier[1].birth.year = 1815;
  strcpy(outlier[1].death.month, "OCT");
  outlier[1].death.year = 1902;
  strcpy(outlier[1].country, "USA");
  strcpy(outlier[1].knownFor, "Women's Rights");
  
  // Galileo Galilei
  
  strcpy(outlier[2].name, "Galileo Galilei");
  strcpy(outlier[2].birth.month, "FEB");
  outlier[2].birth.year = 1564;
  strcpy(outlier[2].death.month, "JAN");
  outlier[2].death.year = 1642;
  strcpy(outlier[2].country, "Italy");
  strcpy(outlier[2].knownFor, "Physics");
  
  // Martin Luther
  
  strcpy(outlier[3].name, "Martin Luther");
  strcpy(outlier[3].birth.month, "NOV");
  outlier[3].birth.year = 1483;
  strcpy(outlier[3].death.month, "FEB");
  outlier[3].death.year = 1546;
  strcpy(outlier[3].country, "Germany");
  strcpy(outlier[3].knownFor, "The Reformation");
  
  for(count=0; count<4; count++) {
    printf("\n\t#%d. %s (%s), born in %d.",
    count+1, outlier[count].name,
    outlier[count].knownFor, outlier[count].birth.year);
  }
  
  printf("\n\n\t...shuffling...\n");
  
  temp = outlier[3];
  outlier[3] = outlier[0];
  outlier[0] = outlier[1];
  outlier[1] = temp;
  
  for(count=0; count<4; count++) {
    printf("\n\t#%d. %s (%s), born in %d.",
    count+1, outlier[count].name,
    outlier[count].knownFor, outlier[count].birth.year);
  }
}