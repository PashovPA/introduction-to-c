#include "string_sum.h"

int main()
{
    setlocale(LC_CTYPE,"Russian");
    size_t a,b;
    printf("������� ���������� ����� � ���������� �������� � �������\n");
    scanf("%i %i",&a,&b);
    double m[a][b];
    double_scan_matrix(m[0],a,b);
    printf("����� ������ � ���������� ������ ��������� - %i",1+str_mx_sum(m[0],a,b));
    return 0;
}
