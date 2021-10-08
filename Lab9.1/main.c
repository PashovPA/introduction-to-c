#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
/*Пашов Павел*/

int sumnum(int a, int p, int *num) /*Функция считает колличесто и сумму p-ичных цифр*/
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
    printf("Введите число\n");
    scanf("%d",&a);
    printf("Систему счисления\n");
    scanf("%d",&p);
    printf("Сумма цифр = %d\n", sumnum(a, p, &n));
    printf("Колличество цифр = %d\n", n);
    return 0;
}
