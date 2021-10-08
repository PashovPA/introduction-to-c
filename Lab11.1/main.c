#include <stdio.h>
#include <locale.h>
#include "gcd_lcm.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf(" Введите два числа\n");
    scanf("%d%d", &a, &b);
    printf(" Итеративный НОД чисел %d and %d равен %d.\n", a, b, gcd_iterative(a, b));
    printf(" Рекурсивный НОД чисел %d and %d равен %d.\n", a, b, gcd_recursive(a, b));
    printf(" Итеративный НОК чисел %d and %d равен %d.\n", a, b, lcm_iterative(a, b));
    printf(" Рекурсивный НОК чисел %d and %d равен %d.\n", a, b, lcm_recursive(a, b));
    return 0;
}
