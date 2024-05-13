// module type.h

#ifndef TYPE_H
#define TYPE_H

// Structure to represent a matrix
typedef struct {
    int num_rows;
    int num_cols;
    double data[100][100]; // Assuming maximum dimensions for simplicity
} Matrix;

// Functions to manipulate matrices
Matrix create_matrix(int num_rows, int num_cols, Matrix mat);
Matrix generate_random_matrix(int num_rows, int num_cols);
Matrix load_matrix(const char *filename);
void display_matrix(Matrix mat);
int num_rows(Matrix mat); 
int num_cols(Matrix mat);

#endif
