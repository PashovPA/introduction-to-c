#ifndef MATRIXOPERATIONS_H_INCLUDED
#define MATRIXOPERATIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "matrixutils.h"

matrix add(matrix a, matrix b); //сложение матриц аналог r = a + b
matrix addequal(matrix a, matrix b); //сложение матриц аналог a+=b
void add_rows(matrix matr, size_t a, size_t b);//сложение строк матрицы

matrix mult(matrix a, matrix b); //умножение матриц
void multd(matrix matr, double a); //умножение матрицы на число
void mult_row(matrix matr, size_t row, double a);//умножение матрицы на число

matrix transpose(matrix matr); //транспозиция матрицы
void swap_rows(matrix matr, size_t a, size_t b);//перестановка строк матрицы

matrix exponent(matrix matr);//сумма матричного ряда
double matrix_norm(matrix matr);//матричная норма максимума суммы строк

#endif // MATRIXOPERATIONS_H_INCLUDED
