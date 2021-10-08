#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "sqr.h"

int main()
{
    double a, b, c, x1, x2;
    setlocale(LC_ALL, "Rus");
    printf("������� ������������ ����������� ���������\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    switch(analyze_function(a, b, c, &x1, &x2))
    {
    case QUADRATIC_TWO_REAL_ROOTS:
        printf("���������� ���������, ������� ����� ��� ������������ �����: %lf  %lf\n", x1, x2);
        break;
    case QUADRATIC_ONE_REAL_ROOT:
        printf("���������� ���������, ������� ����� ���� ������������ ������: %lf\n", x1);
        break;
    case QUADRATIC_TWO_COMPLEX_ROOTS:
        printf("���������� ���������, ������� ����� ��� ����������� ����� \n");
        break;
    case LINEAR:
        printf("�������� ���������, ������� ����� ������: %lf\n", x1);
        break;
    case NO_ROOTS:
        printf("��������� �� ����� ������\n");
        break;
    case ANY_NUMBER_IS_ROOT:
        printf("������ �������� ����� �����\n");
        break;
    case FACTOR_IS_INF_OR_NAN:
        printf("����� ������������� ���� ������������� ��� ��-�����\n");
        break;
    }

    return 0;
}
