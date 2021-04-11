//
//  MemoryDemo.c
//  CCourse
//
//  Created by Raul Morales on 28/03/21.
//

#include <stdio.h>
#include <stdlib.h>
#include "MemoryDemo.h"

int Memory_Demo(void){
    int number_count = 4;
    
    int* my_number_ptr = (int*) malloc(sizeof(int) * number_count);
    printf("Address of malloc block of memory: %p \n", my_number_ptr);
    
    for (int i = 0; i < number_count; i++) {
        *(my_number_ptr + i)=i;
        printf("Added value %d to address %p\n", i, (my_number_ptr + i));
    }

    printf("\n");
    
    int* my_other_number_ptr = (int*) calloc(number_count, sizeof(int));
    
    for (int i = 0; i < number_count; i++) {
        *(my_other_number_ptr + i) = i;
        printf("Added value %d to address %p\n", i, (my_other_number_ptr + i));
    }
    
    my_number_ptr = (int*) realloc(my_number_ptr, (number_count + 2) * sizeof(int));
    for (int i = 0; i < number_count + 2; i++) {
        if(i > 3){
            *(my_number_ptr + i) = i;
        }
        printf("Value %d at Memory %p\n", i, (my_number_ptr + i));
    }
    
    my_other_number_ptr = (int*) realloc(my_other_number_ptr, (sizeof(int) * (number_count - 2)));
    for (int i = 0; i < number_count - 2 ; i++) {
        printf("Value %d at Memory %p\n", i, (my_other_number_ptr + i));
    }
    
    free(my_number_ptr);
    my_number_ptr = NULL;
    free(my_other_number_ptr);
    my_other_number_ptr = NULL;
    return 0;
}
