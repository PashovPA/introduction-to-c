#ifndef INOUTMATRIX_H_INCLUDED
#define INOUTMATRIX_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "matrixutils.h"

matrix read_matrix(size_t height, size_t width); //���� ������� � ����������

void print_matrix(matrix matr); //����� ������� �� �����

#endif // INOUTMATRIX_H_INCLUDED
