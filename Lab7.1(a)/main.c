#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*���������� ����� ���� ��� ����� � ���������� �������� ��������*/
/*����� �����*/

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, s=0;
    printf("������� �����\n");
    scanf("%d", &a);
    while (a!=0)
    {
        s+=a%10;
        a/=10;
    }
    printf("����� ���� ����� = %d", s);
    return 0;
}
