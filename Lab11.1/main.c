#include <stdio.h>
#include <locale.h>
#include "gcd_lcm.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf(" ������� ��� �����\n");
    scanf("%d%d", &a, &b);
    printf(" ����������� ��� ����� %d and %d ����� %d.\n", a, b, gcd_iterative(a, b));
    printf(" ����������� ��� ����� %d and %d ����� %d.\n", a, b, gcd_recursive(a, b));
    printf(" ����������� ��� ����� %d and %d ����� %d.\n", a, b, lcm_iterative(a, b));
    printf(" ����������� ��� ����� %d and %d ����� %d.\n", a, b, lcm_recursive(a, b));
    return 0;
}
