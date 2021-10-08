#include "matrixutils.h"
#include "inoutmatrix.h"
#include "matrixoperations.h"

int main()
{
    setlocale(LC_CTYPE, "Russian");
    size_t h, w;
    printf("������� ������ � ������ ������� �������\n");
    scanf("%d%d", &h, &w);
    matrix matr = read_matrix(h, w);
    printf("�������� �������:\n");
    print_matrix(matr);
    matrix trans = transpose(matr);
    printf("����������������� �������:\n");
    print_matrix(trans);
    matrix exp = exponent(matr);
    printf("����� ���������� ����:\n");
    print_matrix(exp);
    printf("��������� ����� : %lf\n", matrix_norm(matr));
    matrix iden = fill_iden(matr);
    printf("������� ������� ��������� :\n");
    print_matrix(iden);

    destroy_matrix(&matr);
    destroy_matrix(&trans);
    destroy_matrix(&exp);
    destroy_matrix(&iden);
    return 0;
}
