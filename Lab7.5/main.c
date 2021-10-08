#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Построение таблицы значений функции на промежутке с заданным шагом*/
/*Пашов Павел*/

int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b, h, x, y;
    printf("Введите левую границу промежутка\n");
    scanf("%lf", &a);
    printf("Введите правую границу промежутка\n");
    scanf("%lf", &b);
    printf("Введите шаг вычисления\n");
    scanf("%lf", &h);
    printf("      X      |      Y       \n"
           "-------------+--------------\n");
    for (x=a; x<b; x=x+h)
    {
     y=x*x-2*x+1;
     printf("%12f | %12f\n", x, y);
    }
    printf("%12f | %12f\n", b, b*b-2*b+1);
    printf("-------------+--------------\n");
    return 0;
}
