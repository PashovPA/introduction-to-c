#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*����������� ���� ������������ �� ��� ��������*/
/*����� �����*/
double min(double  x, double  y)
{
    return x < y ? x : y;
}
double  max(double  x, double  y)
{
    return x > y ? x : y;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    double a,b,c,d,m,n;
    printf("������� �������� ������ ������������\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a==b && a==c && b==c) printf("�������������\n");
    else { d = max(a, max(b,c));
           n = min(a, min(b,c));
           if ((a==d && b==n) || (b==d && a==n)) m=c;
           if ((a==d && c==n) || (c==d && a==n)) m=b;
           if ((c==d && b==n) || (b==d && c==n)) m=a;
           if (d>m+n) printf("��������������\n");
           else if (d == m+n) printf("����������� � �������\n");
           else if (pow(d,2) == (pow(n,2)+ pow(m,2))) printf("�������������\n");
           else if (pow(d,2) > (pow(n,2)+ pow(m,2))) printf("������������\n");
           else if (pow(d,2) < (pow(n,2)+ pow(m,2))) printf("�������������\n");}
    return 0;
}

