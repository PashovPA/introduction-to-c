#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "printit.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, base;
    printf("������� ����� � ��������� ��\n");
    scanf("%d%d", &a, &base);
    if (base > 16 || base < 2)
    {
        printf("���������������� ���������");
        return 1;
    }
    printpr(a, base);
    printf("\n");
    printob(a, base);
    return 0;
}
