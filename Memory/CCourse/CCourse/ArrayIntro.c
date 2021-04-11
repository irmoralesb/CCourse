//
//  ArrayIntro.c
//  CCourse
//
//  Created by Raul Morales on 30/03/21.
//

#include "ArrayIntro.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define ARRAY_SIZE 4

typedef struct Person{
    int age;
    int id;
} Person;

int Array_Intro(void){
    
    int numbers[] = {1,2,3,4};
    
    const double floats[] = {1.12,2.23,3.34,4.45};
    
    const char name[] = "Raul";
    
    const Person people[] ={
        {30,1},
        {26,2}
    };
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Number: %d\n", numbers[i]);
        numbers[i] += 2;
    }
    
    assert(numbers == &numbers[0]);
    
    printf("\nStarting address of the 'numbers' array by array name: %p\n", numbers);
    printf("\nStarting address of the 'numbers' array by pointer to the first element: %p\n\n", &numbers[0]);

    
    return 0;
}
