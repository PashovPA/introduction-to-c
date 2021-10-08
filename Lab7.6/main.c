#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Построение таблицы значений функции на промежутке с заданным шагом*/
/*Пашов Павел*/

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b, h, x, y, p;
    printf("Введите левую границу промежутка\n");
    scanf("%lf", &a);
    printf("Введите правую границу промежутка\n");
    scanf("%lf", &b);
    printf("Введите шаг вычисления\n");
    scanf("%lf", &h);
    printf("Введите значение p\n");
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
