#include "delspace.h"
#include <locale.h>

#define LENGTH 100

int main()
{
    int maximum;
    setlocale(LC_CTYPE, "Russian");
    char *a;
    printf("������� ������:\n");
    a = malloc(LENGTH);
    if (fgets(a, LENGTH, stdin) == NULL)
        {
            printf("�������� ����!\n");
            return 1;
        }
    if (maxint(a, &maximum)) printf("���� : %d", maximum);
        else printf("� ������ ��� ����� �����");
    return 0;
}
