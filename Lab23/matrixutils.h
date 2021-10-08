#ifndef MATRIXUTILS_H_INCLUDED
#define MATRIXUTILS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct matrix{
    double* data;
    size_t height;
    size_t width;
} matrix;

extern const matrix ERROR_MATRIX;

matrix create_matrix(size_t height, size_t width); //создание матрицы заданной высоты и ширины
void destroy_matrix(matrix* matr); //очистка памяти занятой матрицей по данному указателю

void fill_zeroes(matrix matr); //заливка матрицы нулями
matrix fill_iden(matrix matr); //заливка матрицы единицами, если она квадратная

double* access(matrix matr, size_t i, size_t j); //получение указателя на элемент матрицы

matrix zero_matrix(size_t height, size_t width); //создание нулевой матрицы
matrix identity_matrix(size_t size); //создание единичной матрицы

matrix copy(matrix matr); //копирование одной матрицы в другую

#endif // MATRIXUTILS_H_INCLUDED
