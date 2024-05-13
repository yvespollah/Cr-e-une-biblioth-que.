// module type.h

#ifndef TYPE_H
#define TYPE_H

// Structure to represent a matrix
typedef struct {
    int num_rows;
    int num_cols;
    double data[100][100]; // Assuming maximum dimensions for simplicity
} Matrix;

Matrix transpose(Matrix mat); 
Matrix add(Matrix mat1, Matrix mat2);
Matrix subtract(Matrix mat1, Matrix mat2);
Matrix scalar_multiply(Matrix mat, double scalar);
Matrix matrix_multiply(Matrix mat1, Matrix mat2);

#endif
