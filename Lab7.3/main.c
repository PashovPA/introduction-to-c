#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*����� ������������� � ������� �� �������� ��������*/
/*����� �����*/

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, m1, m2;
    int n=0, N;
    m1=0;
    m2=0;
    a=1;
    printf("������� ����� ������������������\n");
    while (a!=0)
    {
     scanf("%lf", &a);
     n=n+1;
     if (a>=m1)
     {
       m2=m1;
       m1=a;
       N=n;
     }
     else if (a>m2) m2=a;
    }
    printf("������������ ������� ����� = %lf\n", m1);
    printf("����� �������� ����� = %d\n", N);
    printf("������ ������������ ������� ����� = %lf\n", m2);
    return 0;
}
