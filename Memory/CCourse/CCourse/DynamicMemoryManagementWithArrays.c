//
//  DynamicMemoryManagementWithArrays.c
//  CCourse
//
//  Created by Raul Morales on 10/04/21.
//

#include "DynamicMemoryManagementWithArrays.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEFAULT_SIZE 1000

double get_random_number();

void gather_metrics(size_t size, double* metric_arr);

int Dynamic_Memory_Management_With_Arrays(int specified_array_size){
    int array_size = DEFAULT_SIZE;
    
//  This is not recommended
//    double heat_distribution_metrics[array_size],
//    grinder_metrics[array_size],
//    pour_metrics[array_size];
    
//  We better do this way
    double *heat_distribution_metrics = (double *) malloc(array_size * sizeof(double)),
        *grinder_metrics = (double *) malloc(array_size * sizeof(double)),
        *pour_metrics = (double *) malloc(array_size * sizeof(double));
    
//  Here we validate if it was possible to allocate the memory
    array_size = DEFAULT_SIZE;
    if(!heat_distribution_metrics){
        heat_distribution_metrics = (double * ) malloc(array_size * sizeof(double));
    }
    if(!grinder_metrics){
        grinder_metrics = (double *) malloc(array_size * sizeof(double));
    }
    if(!pour_metrics){
        pour_metrics = (double *) malloc(array_size * sizeof(double));
    }
    
    double *metrics_matrix[3] = {
        heat_distribution_metrics,
        grinder_metrics,
        pour_metrics
    };
    
    for (int i = 0; i < 3; i++) {
        gather_metrics(array_size, metrics_matrix[i]);
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < array_size; j++) {
            printf("Row/Col %d/%d ===> Value %f\n", i+1, j+1, metrics_matrix[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        free(metrics_matrix[i]);
        metrics_matrix[i] = NULL;
    }
    
    return 0;
}

void gather_metrics(size_t size, double* metric_arr){
    for (int i= 0; i < size; i++) {
        metric_arr[i]= get_random_number();
    }
}

double get_random_number(){
    return  rand() / (RAND_MAX / 2.5);
}
