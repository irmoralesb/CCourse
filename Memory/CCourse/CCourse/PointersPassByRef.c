//
//  PointersPassByRef.c
//  CCourse
//
//  Created by Raul Morales on 29/03/21.
//

#include "PointersPassByRef.h"
#include <stdlib.h>

void print_int_by_reference(int* number_ptr);
void print_int_by_value(int number);
void malloc_int_dangerous(int* number_ptr);
void malloc_int_safe(int** number_ptr);


int Pointers_Pass_By_Reference(void){
    int my_number = 10;
    
    print_int_by_value(my_number);
    print_int_by_reference(&my_number);
    printf("The addresses printed above should be different! ^^\n\n\n");

    int* my_number_ptr = &my_number;
    printf("'number_ptr' address before malloc: %p\n", my_number_ptr);

    // 1. Create function that takes in a pointer to an int, attempts to malloc memory for it and return the pointer -
    // this will not work (memory leak will occur... because the pointer passed in points to memory on the stack)
    malloc_int_dangerous(my_number_ptr);
    
    printf("Original 'number_ptr' address after dangerous malloc: %p\n", my_number_ptr);
    printf("The above address for 'number_ptr' does not change!\n");

    // 2. Create a function that takes in a double pointer to an int and malloc memory to the dereferenced double pointer
    malloc_int_safe(&my_number_ptr);
    printf("'number_ptr' address after safe malloc: %p\n", my_number_ptr);

    free(my_number_ptr);
    my_number_ptr = NULL;
    
    return 0;
}

// Takes in an integer and prints it to the console
void print_int_by_reference(int* number_ptr){
    printf("Printing Int =>> Address: %p | Value: %d\n", number_ptr, *number_ptr);
}

// The 'number' argument below is copied into the function scope.
void print_int_by_value(int number){
    printf("Printing Int =>> Address: %p | Value: %d\n", &number, number);
}

// This will not work and will cause a memory leak because 'number_ptr' is passed by value.
void malloc_int_dangerous(int* number_ptr){
    number_ptr = (int*)malloc(sizeof(int));
    printf("[malloc_int_dangerous] => 'number_ptr' address after dangerous malloc: %p\n", number_ptr);
    printf("[malloc_int_dangerous] => ^^ That address space marks a memory-leaked block!\n\n");
    // 'number_ptr' now goes out of scope and you have a memory leak...
}

// This will work nicely and will not cause a memory leak as long as the caller of this function frees the memory.
void malloc_int_safe(int** number_ptr){
    *number_ptr = (int*)malloc(sizeof(int));
}
