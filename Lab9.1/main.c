#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*����� �����*/

int sumnum(int a, int p, int *num) /*������� ������� ���������� � ����� p-����� ����*/
{
    int sum=0;
    *num=0;
    while (a!=0)
    {
        *num=*num+1;
         sum=sum + a%p;
         a=a/p;
    }
    return sum;
}

int main()
{
    int a, p, n, m;
    setlocale(LC_ALL, "Rus");
    printf("������� �����\n");
    scanf("%d",&a);
    printf("������� ���������\n");
    scanf("%d",&p);
    printf("����� ���� = %d\n", sumnum(a, p, &n));
    printf("����������� ���� = %d\n", n);
    return 0;
}
