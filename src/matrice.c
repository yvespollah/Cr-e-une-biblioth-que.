#include <stdio.h>
#include <stdlib.h>
#include "../include/matrice.h"

Matrix transpose(Matrix mat) {
    Matrix transposed;
    transposed.num_rows = mat.num_cols;
    transposed.num_cols = mat.num_rows;

    for (int i = 0; i < mat.num_rows; i++) {
        for (int j = 0; j < mat.num_cols; j++) {
            transposed.data[j][i] = mat.data[i][j];
        }
    }

    return transposed;
}

Matrix add(Matrix mat1, Matrix mat2) {
    Matrix result;
    result.num_rows = mat1.num_rows;
    result.num_cols = mat1.num_cols;

    for (int i = 0; i < mat1.num_rows; i++) {
        for (int j = 0; j < mat1.num_cols; j++) {
            result.data[i][j] = mat1.data[i][j] + mat2.data[i][j];
        }
    }

    return result;
}

Matrix subtract(Matrix mat1, Matrix mat2) {
    Matrix result;
    result.num_rows = mat1.num_rows;
    result.num_cols = mat1.num_cols;

    for (int i = 0; i < mat1.num_rows; i++) {
        for (int j = 0; j < mat1.num_cols; j++) {
            result.data[i][j] = mat1.data[i][j] - mat2.data[i][j];
        }
    }

    return result;
}

Matrix scalar_multiply(Matrix mat, double scalar) {
Matrix result;
result.num_rows = mat.num_rows;
result.num_cols = mat.num_cols;
for (int i = 0; i < mat.num_rows; i++) {
    for (int j = 0; j < mat.num_cols; j++) {
        result.data[i][j] = mat.data[i][j] * scalar;
    }
}

return result;

}

Matrix matrix_multiply(Matrix mat1, Matrix mat2) {
Matrix result;
if (mat1.num_cols != mat2.num_rows) {
fprintf(stderr, "Error: Incompatible matrices for multiplication\n");
exit(1);
}
result.num_rows = mat1.num_rows;
result.num_cols = mat2.num_cols;

for (int i = 0; i < mat1.num_rows; i++) {
    for (int j = 0; j < mat2.num_cols; j++) {
        result.data[i][j] = 0;
        for (int k = 0; k < mat1.num_cols; k++) {
            result.data[i][j] += mat1.data[i][k] * mat2.data[k][j];
        }
    }
}

return result;
}