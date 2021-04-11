//
//  main.c
//  CCourse
//
//  Created by Raul Morales on 28/03/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MemoryDemo.h"
#include "PointerIntro.h"
#include "PointersPassByRef.h"
#include "PointerArithmetics.h"
#include "FunctionPointers.h"
#include "MemoryManagement.h"
#include "ArrayIntro.h"
#include "MultiDimensionalArrays.h"
#include "DynamicMemoryManagementWithArrays.h"

int main(int argc, const char * argv[]) {
    int result = 0;
    int selected_option = 0;
    puts("Select what option you want to execute");
    puts("1) Memory Demo");
    puts("2) Pointer Intro");
    puts("3) Pointer Passed by Ref");
    puts("4) Pointer Arithmetics");
    puts("5) Pointer Functions");
    puts("6) Memory Management");
    puts("7) Array Intro");
    puts("8) Multidimensional Arrays");
    puts("9) Dynamic Memory Management With Array");
    scanf("%d", &selected_option);
    printf("Selected Value: %d", selected_option);
    char* language = (char*)malloc(8 * sizeof(char));
    strcpy(language, "spanish");
    char coffee_type[] = "decaf";
    long pour_type = 4;
    switch ((int)selected_option) {
        case 1:
            result = Memory_Demo();
            break;
        case 2:
            result = Pointer_Intro();
            break;
        case 3:
            result = Pointers_Pass_By_Reference();
            break;
        case 4:
            result = Pointer_Arithmetics();
            break;
        case 5:
            result = Function_Pointers(language);
            break;
        case 6:
            result = Memory_Management(&coffee_type, pour_type);
            break;
        case 7:
            result = Array_Intro();
            break;
        case 8:
            result = MultiDimensional_Arrays();
            break;
        case 9:
            result = Dynamic_Memory_Management_With_Arrays(100);
            break;
        default:
            break;
    }
    
    return result;
}

