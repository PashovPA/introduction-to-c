#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*���������� ����� ���� ��� ����� � ������������  �������� ��������*/
/*����� �����*/

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b, s=0;
    printf("������� ������� ���������\n");
    scanf("%d", &b);
    printf("������� �����\n");
    scanf("%d", &a);
    while (a!=0)
    {
        s=s+a%b;
        a=a/b;
    }
    printf("����� ���� ����� = %d", s);
    return 0;
}
