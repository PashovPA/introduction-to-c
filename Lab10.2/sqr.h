#ifndef SQR_H_INCLUDED
#define SQR_H_INCLUDED

/*
 * ���� ����������� ������������� ��������� ������������:
 * QUADRATIC_TWO_REAL_ROOTS - ���������� ���������, ��� ������������ �����
 * QUADRATIC_ONE_REAL_ROOT - ���������� ���������, ���� ������������ ������
 * QUADRATIC_TWO_COMPLEX_ROOTS - ���������� ���������, ��� ����������� �����
 * LINEAR - �������� ���������, ������������ ������
 * NO_ROOTS - ��������� �� ����� ������
 * ANY_NUMBER_IS_ROOT - ������ �������� ����� �����
 * FACTOR_IS_INF_OR_NAN - ������������ ������������� ��� �� �����.
 */

enum type
{
    QUADRATIC_TWO_REAL_ROOTS,
    QUADRATIC_ONE_REAL_ROOT,
    QUADRATIC_TWO_COMPLEX_ROOTS,
    LINEAR,
    NO_ROOTS,
    ANY_NUMBER_IS_ROOT,
    FACTOR_IS_INF_OR_NAN
};

/*
 * ������� ����������� ���������� ��������� �� ��� �������������.
 * param a - ����������� ����� x^2
 * param b - ����������� ����� x
 * param c - ��������� �����������
 * param x1 - ������ ������ ���������
 * param x2 - ������ ������ ���������
 * ������� ���������� ������������� ��������� ������������ enum type
 */
enum type analyze_function(double a, double b, double c, double *x1, double *x2);

#endif // SQR_H_INCLUDED
