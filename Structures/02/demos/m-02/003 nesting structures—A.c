#include <stdio.h>
#include <string.h>

void main()
{
  struct stadium {
    int capacity;
    int built;
    char location[32];
    char name[32];
  };
  
  struct team {
    struct stadium home;
    char owner[32];
    char manager[32];
    char nickName[32];
  };
  
  struct team arsenal;
  
  arsenal.home.capacity = 60260;
  arsenal.home.built = 2004;
  strcpy(arsenal.home.location, "Highbury");
  strcpy(arsenal.home.name, "Emirates");
  
  strcpy(arsenal.owner, "KSE Inc");
  strcpy(arsenal.manager, "Mikel Arteta");
  strcpy(arsenal.nickName, "The Gunners");
  
  printf("\nNickname: %s, Manager: %s, Home: %s",
    arsenal.nickName, arsenal.manager, arsenal.home.name);
}