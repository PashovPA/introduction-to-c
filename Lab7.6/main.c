#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*���������� ������� �������� ������� �� ���������� � �������� �����*/
/*����� �����*/

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b, h, x, y, p;
    printf("������� ����� ������� ����������\n");
    scanf("%lf", &a);
    printf("������� ������ ������� ����������\n");
    scanf("%lf", &b);
    printf("������� ��� ����������\n");
    scanf("%lf", &h);
    printf("������� �������� p\n");
    scanf("%lf", &p);
    printf("      X      |      Y       \n"
           "-------------+--------------\n");
    for (x=a; x<b; x=x+h)
    if (x!=p)
     {
         y=((x*x-p*p)/(x-p))-p;
         printf("%12e | %12e\n", x, y);
     }
    printf("%12e | %12e\n", b, ((x*x-p*p)/(x-p))-p);
    printf("-------------+--------------\n");
    return 0;
}
