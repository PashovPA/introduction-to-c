#ifndef MATRIXOPERATIONS_H_INCLUDED
#define MATRIXOPERATIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "matrixutils.h"

matrix add(matrix a, matrix b); //�������� ������ ������ r = a + b
matrix addequal(matrix a, matrix b); //�������� ������ ������ a+=b
void add_rows(matrix matr, size_t a, size_t b);//�������� ����� �������

matrix mult(matrix a, matrix b); //��������� ������
void multd(matrix matr, double a); //��������� ������� �� �����
void mult_row(matrix matr, size_t row, double a);//��������� ������� �� �����

matrix transpose(matrix matr); //������������ �������
void swap_rows(matrix matr, size_t a, size_t b);//������������ ����� �������

matrix exponent(matrix matr);//����� ���������� ����
double matrix_norm(matrix matr);//��������� ����� ��������� ����� �����

#endif // MATRIXOPERATIONS_H_INCLUDED
