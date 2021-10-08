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

matrix create_matrix(size_t height, size_t width); //�������� ������� �������� ������ � ������
void destroy_matrix(matrix* matr); //������� ������ ������� �������� �� ������� ���������

void fill_zeroes(matrix matr); //������� ������� ������
matrix fill_iden(matrix matr); //������� ������� ���������, ���� ��� ����������

double* access(matrix matr, size_t i, size_t j); //��������� ��������� �� ������� �������

matrix zero_matrix(size_t height, size_t width); //�������� ������� �������
matrix identity_matrix(size_t size); //�������� ��������� �������

matrix copy(matrix matr); //����������� ����� ������� � ������

#endif // MATRIXUTILS_H_INCLUDED
