// module type.c

#include "../include/type.h"
#include <stdio.h>
#include <stdlib.h>

// Function to create a matrix with specified dimensions
Matrix create_matrix(int num_rows, int num_cols, Matrix mat) {
    mat.num_rows = num_rows;
    mat.num_cols = num_cols;
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            mat.data[i][j] = 0.0;
        }
    }
    return mat;
}

// Function to generate a matrix with random real values
Matrix generate_random_matrix(int num_rows, int num_cols) {
    Matrix mat;
    mat.num_rows = num_rows;
    mat.num_cols = num_cols;
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            mat.data[i][j] = (double)rand() / RAND_MAX;
        }
    }
    return mat;
}

// Function to load a matrix from a file
Matrix load_matrix(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Unable to open file %s\n", filename);
        exit(1);
    }

    int num_rows, num_cols;
    fscanf(file, "%d %d", &num_rows, &num_cols);

    Matrix mat;
    mat.num_rows = num_rows;
    mat.num_cols = num_cols;

    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            fscanf(file, "%lf", &mat.data[i][j]);
        }
    }

    fclose(file);
    return mat;
}

// Function to display a matrix
void display_matrix(Matrix mat) {
    for (int i = 0; i < mat.num_rows; i++) {
        for (int j = 0; j < mat.num_cols; j++) {
            printf("%f\t", mat.data[i][j]);
        }
        printf("\n");
    }
}

// Functions to get information about a matrix
int num_rows(Matrix mat) {
    return mat.num_rows;
}

int num_cols(Matrix mat) {
    return mat.num_cols;
}
