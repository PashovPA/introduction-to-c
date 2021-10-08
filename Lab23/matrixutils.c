#include "matrixutils.h"

const matrix ERROR_MATRIX = (matrix) {NULL, 0, 0};

matrix create_matrix(size_t height, size_t width)
{
    return (matrix) {.data = malloc(height * width * sizeof(double)), .height = height, .width = width};
}

void destroy_matrix(matrix* matr)
{
    free(matr -> data);
    matr -> data = NULL;
}

void fill_zeroes(matrix matr)
{
    for (size_t i = 0; i < matr.height * matr.width; ++i) *(matr.data + i) = 0;
}

matrix fill_iden(matrix matr)
{
    if (matr.width != matr.height) return ERROR_MATRIX;
    fill_zeroes(matr);
    for (size_t i = 0; i < matr.width; ++i)
        {
            *(matr.data + matr.width * i + i) = 1;
        }
    return matr;
}

double* access(matrix matr, size_t i, size_t j)
{
    if (i > matr.height || j > matr.width) return NULL;

    return (matr.data + i * matr.width + j);
}

matrix zero_matrix(size_t height, size_t width)
{
    matrix matr = create_matrix(height, width);
    fill_zeroes(matr);
    return matr;
}

matrix identity_matrix(size_t size)
{
    matrix matr = zero_matrix(size, size);
    for (size_t i = 0; i < size; ++i)
        {
            *(matr.data + size * i + i) = 1;
        }
    return matr;
}

matrix copy(matrix matr)
{
    matrix new_matr = create_matrix(matr.height, matr.width);
    for (size_t i = 0; i < matr.height * matr.width; ++i) *(new_matr.data + i) = *(matr.data + i);
    return new_matr;
}

