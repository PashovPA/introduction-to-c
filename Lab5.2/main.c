#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*����������� �������� ������� �� ����*/
/*����� �����*/
int main()
{
    setlocale(LC_ALL, "Rus");
    int n,m,k,a,b,c,f,g;
    printf("������� ���, ����� � ���� �������� ������� ��������\n");
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    printf("������� ���, ����� � ���� �������� ������� ��������\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    f=10000*n+100*m+k;
    g=10000*a+100*b+c;
    if (f<g) printf("������ ������� ������");
    else if (f>g) printf("������ ������� ������");
    else printf("���� ������ ��������");
    return 0;
}
