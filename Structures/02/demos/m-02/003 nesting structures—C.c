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
    struct stadium oldHome;
    struct stadium home;
    char owner[32];
    char manager[32];
    char nickName[32];
  } arsenal = {
      {38419, 1913, "Highbury", "Highbury"},    // struct oldHome
      {60260, 2004, "Highbury", "Emirates"},    // struct home
      "KSE Inc", "Mikel Arteta", "The Gunners"  // struct team
  };
  
  printf("\n          Nickname: %s\n           Manager: %s\n              Home: %s\n    Former Stadium: %s\n\n",
    arsenal.nickName, arsenal.manager,
    arsenal.home.name, arsenal.oldHome.name);
}