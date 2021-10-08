#ifndef ARRMISS_H_INCLUDED
#define ARRMISS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* ������� ��������� - ����������� ��������� �� ������, ������ �������
 * ������� ���������� �������� �������� ���������������
 */

double average_arifm(const double *x, size_t size); // ���������� �������� ���������������

/* ������� ��������� - ����������� ��������� �� ������, ������ �������, ������� ��������������, ������� ��������� �������� average_arifm
 * ������� ���������� �������� �������� ��������������� ����������
 */

double average_sqr(const double *x, size_t size, double arifm); // ���������� �������� ������������� ����������

/* ������� ��������� - ����������� ��������� �� ������, ������ �������, ������� ��������������(average_arifm), ������� ��������������(average_sqr)
 * void �������
 */
void print_miss(const double *x, size_t size, double sqr, double arifm); // ����� �������� ��������� �������, ������ �������� ���������

#endif // ARRMISS_H_INCLUDED
