#include "sort_check.h"

int main()
{
    setlocale (LC_CTYPE,"Russian");
    int a;
    scanf("%i",&a);
    size_t s1=a;
    int a_nmb[s1];
    int_scan(a_nmb,a);

    switch (sort_check(a_nmb,a))
    {
        case -1: {printf("������������������� �������"); break;}
        case  0: {printf("������������������� �� �������� ����������"); break;}
        case  1: {printf("������������������� ����������"); break;}
        case  2: {printf("��� �������� ������������������ �����"); break;}
    };
    return 0;
}
