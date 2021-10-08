#include "inoutmatrix.h"

matrix read_matrix(size_t height, size_t width)
{
    matrix matr = create_matrix(height, width);
    printf("¬ведите %d x %d матрицу:\n", (int) height, (int) width);
    for (size_t i = 0; i < height; ++i)
        {
            for (size_t j = 0; j < width; ++j) scanf("%lf", access(matr, i, j));
        }
    return matr;
}

void print_matrix(matrix matr)
{
    for (size_t i = 0; i < matr.height; ++i)
        {
            for (size_t j = 0; j < matr.width; ++j) printf("%.2lf\t ", *access(matr, i, j));
            printf("\n");
        }
}
