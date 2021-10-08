#include "matrixoperations.h"

matrix add(matrix a, matrix b)
{
    if (a.height != b.height || a.width != b.height) return ERROR_MATRIX;
    matrix result = create_matrix(a.height, a.width);
    for (size_t i = 0; i < result.height; ++i)
    {
        for (size_t j = 0; j < result.width; ++j)
        {
            *access(result, i, j) = *access(a, i, j) + *access(b, i, j);
        }
    }
    return result;
}

matrix addequal(matrix a, matrix b)
{
    if (a.height != b.height || a.width != b.height) return ERROR_MATRIX;
    for (size_t i = 0; i < a.height; ++i)
    {
        for (size_t j = 0; j < a.width; ++j)
        {
            *access(a, i, j) += *access(b, i, j);
        }
    }
    return a;
}

matrix mult(matrix a, matrix b)
{
    if (a.width != b.height) return ERROR_MATRIX;
    matrix result = zero_matrix(a.height, b.width);
    for (size_t j = 0; j < result.height; ++j)
    {
        for (size_t i = 0; i < result.width; ++i)
        {
            for (size_t k = 0; k < a.width; ++k)
            {
                *access(result, i, j) += (*access(a, i, k)) * (*access(b, k, j));
            }
        }
    }
    return result;
}

void multd(matrix matr, double a)
{
    for (size_t i = 0; i < matr.height * matr.width; ++i) *(matr.data + i) *= a;
}

matrix transpose(matrix matr)
{
    matrix transposed = create_matrix(matr.width, matr.height);
    for (size_t i = 0; i < matr.height; ++i)
    {
        for (size_t j = 0; j < matr.width; ++j)
        {
            *access(transposed, j, i) = *access(matr, i, j);
        }

    }
    return transposed;
}

void mult_row(matrix matr, size_t row, double a)
{
    if (row >= matr.height) return;
    for (size_t i = 0; i < matr.width; ++i)
    {
       *access(matr, row, i) *= a;
    }
}

void swap_rows(matrix matr, size_t a, size_t b)
{
    if (a >= matr.height || b >= matr.height) return;
    for (size_t i = 0; i < matr.width; ++i)
    {
        double c = *access(matr, a, i);
        *access(matr, a, i) = *access(matr, b, i);
        *access(matr, b, i) = c;
    }
}

void add_rows(matrix matr, size_t a, size_t b)
{
    if (a >= matr.height || b >= matr.height) return;
    for (size_t i = 0; i < matr.width; ++i)
    {
      *access(matr, a, i) += *access(matr, b, i);
    }
}

matrix exponent(matrix matr)
{
    if (matr.width != matr.height) return ERROR_MATRIX;
    double q = 1;
    matrix result = identity_matrix(matr.height);
    matrix power = identity_matrix(matr.height);

    for (int i = 1; i < 20; ++i)
    {
        matrix temp = mult(power, matr);
        matrix temp2 = copy(temp);
        q /= i;
        multd(temp2, q);
        matrix temp3 = add(result, temp2);

        destroy_matrix(&power);
        power.data = temp.data;

        destroy_matrix(&result);
        result.data = temp3.data;

        destroy_matrix(&temp2);
    }

    destroy_matrix(&power);
    return result;
}

double matrix_norm(matrix matr)
{
    double sum, maxsum = 0;
    for (size_t i = 0; i < matr.height; ++i)
        {
            for (size_t j = 0; j < matr.width; ++j)
                {
                    sum += fabs(*access(matr, i, j));
                }
            if (sum > maxsum) maxsum = sum;
            sum = 0;
        }
    return maxsum;
}
