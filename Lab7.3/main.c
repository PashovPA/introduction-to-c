#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Поиск максимального и второго по величине элемента*/
/*Пашов Павел*/

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, m1, m2;
    int n=0, N;
    m1=0;
    m2=0;
    a=1;
    printf("Введите числа последовательности\n");
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
    printf("Максимальный элемент равен = %lf\n", m1);
    printf("Номер элемента равен = %d\n", N);
    printf("Второй максимальный элемент равен = %lf\n", m2);
    return 0;
}
