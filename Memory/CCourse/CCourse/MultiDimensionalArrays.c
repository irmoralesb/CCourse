//
//  MultiDimensionalArrays.c
//  CCourse
//
//  Created by Raul Morales on 30/03/21.
//

#include "MultiDimensionalArrays.h"

#define ROWS 10
#define COLUMNS 4

int MultiDimensional_Arrays(){
    int matrix[ROWS][COLUMNS] = {
        {1, 0, 1, 0},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 0, 0},
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 0}
    };
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            matrix[i][j] = matrix[i][j] ^ 1;
        }
    }
    return 0;
}

