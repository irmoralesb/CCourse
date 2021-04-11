//
//  PointerIntro.c
//  CCourse
//
//  Created by Raul Morales on 28/03/21.
//

#include "PointerIntro.h"
#include <stdlib.h>

int Pointer_Intro(void){
    int my_number = 10;
    int* my_ptr;
    
    printf("Address of 'my_number' %p\n", &my_number);
    
    my_ptr = &my_number;
    
    char* name = (char*) malloc(8 * sizeof(char));
    
    printf("Value of 'my_number' %d\n", *my_ptr);
    
    int my_copied_number = *my_ptr;
    
    printf("Value of 'my_copied_number' %d\n", my_copied_number);
    
    *my_ptr = 20;
    
    printf("'my_number': %d, 'my_copied_number' %d\n", *my_ptr, my_copied_number);
    
    free(name);
    name = NULL;
    
    return 0;
}
