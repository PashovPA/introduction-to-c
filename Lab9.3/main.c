#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Пашов Павел*/

void swap(double *x, double *y)/*swap*/
{
    double z = *x;
    *x=*y;
    *y=z;
}

void sortthree(double *x, double *y, double *z)/*sort*/
{
    if (*x < *y) swap(x,y);
    if (*x < *z) swap(x,z);
    if (*y < *z) swap(y,z);
}

int main()
{
    double x,y,z;
    setlocale(LC_ALL, "Rus");
    printf("Введите числа\n");
    scanf("%lf%lf%lf",&x, &y, &z);
    sortthree(&x, &y, &z);
    printf("%lf %lf %lf", z, y, x);
    return 0;
}
