//
//  FunctionPointers.c
//  CCourse
//
//  Created by Raul Morales on 29/03/21.
//

#include "FunctionPointers.h"
#include <string.h>

typedef struct Person{
    char* name;
    int age;
    void (*greeting)(void);
} Person;

void say_english_greeting(void);
void say_spanish_greeting(void);
void say_german_greeting(void);
void say_no_greeting(void);

int Function_Pointers(char* language){
    void (*greeting)(void);
    
    if(strlen(language) > 0){
        if (strcmp("spanish", language) == 0) {
            greeting = &say_spanish_greeting;
        }
        else if(strcmp("english", language) == 0){
            greeting = &say_english_greeting;
        }
        else if(strcmp("german", language) == 0){
            greeting = &say_german_greeting;
        }
        else{
            greeting = &say_no_greeting;
        }
    }else{
        greeting = &say_no_greeting;
    }
    
    Person person = {"Raul", 19, greeting};
    
    person.greeting();
    return 0;
}

/**
 * Function definitions
 **/
void say_english_greeting() {
    printf("Hello!\n");
}

void say_spanish_greeting() {
    printf("Hola!\n");
}

void say_german_greeting() {
    printf("Hallo!\n");
}

void say_no_greeting(){
    puts("No language selected");
}
