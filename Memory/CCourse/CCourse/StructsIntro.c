//
//  StructsIntro.c
//  CCourse
//
//  Created by Raul Morales on 15/04/21.
//

#include "StructsIntro.h"
#include <stdio.h>
#include <stddef.h>

typedef struct Grade {
    char letter;
    int rank;
} Grade;

int Structs_Intro(void){
    const Grade student_grade = { 'A', 96};
    
    printf("\n\nLetter:\t\t\t\t\t\t%c\n", student_grade.letter);
    printf("Rank:\t\t\t\t\t\t%d\n\n", student_grade.rank);
    
    const size_t letter_byte_size = sizeof(student_grade.letter);
    const size_t rank_byte_size = sizeof(student_grade.rank);
    
    printf("Size of student_grade.letter is:\t\t%zu\n", letter_byte_size);
    printf("Size of student_grade.rank is:\t\t\t%zu\n", rank_byte_size);
    
    const size_t student_grade_byte_size = sizeof(student_grade);
    
    printf("Total size of student_grade in bytes:\t\t%zu\n", student_grade_byte_size);
    
    // Calculate necessary padding via sizes of struct members
    const size_t total_padding_in_grade_struct = student_grade_byte_size - (letter_byte_size + rank_byte_size);
    
    printf("Total padding of Grade struct in bytes:\t\t%zu\n\n", total_padding_in_grade_struct);
    
    // Reveal memory address positions of struct members
    printf("Address of b:\t\t\t\t\t%p\n", &student_grade.letter);
    printf("Address of a:\t\t\t\t\t%p\n", &student_grade.rank);
    
    // Calculate padding via memory offsets using the <stddef.h> "offsetof" macro
    const size_t letter_offset  = offsetof(Grade, letter),
                 rank_offset    = offsetof(Grade, rank),
    padding        = rank_offset - (letter_offset + letter_byte_size);
    
    printf("Letter byte offset is:\t\t\t\t%zu\n", letter_offset);
    printf("Rank byte offset is:\t\t\t\t%zu\n", rank_offset);
    printf("Total padding of Grade struct in bytes is:\t%zu\n\n", padding);
    printf("------------------------------------------ \n");
    printf("| letter: %zu |  padding: %zu  |   rank: %zu   |\n", letter_byte_size, padding, rank_byte_size);
    printf("------------------------------------------ \n\n");


    return 0;
}
