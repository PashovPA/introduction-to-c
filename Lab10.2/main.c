#include <stdio.h>
#include <math.h>
#include <locale.h>
#include "sqr.h"

int main()
{
    double a, b, c, x1, x2;
    setlocale(LC_ALL, "Rus");
    printf("Введите коэффициенты квадратного уравнения\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    switch(analyze_function(a, b, c, &x1, &x2))
    {
    case QUADRATIC_TWO_REAL_ROOTS:
        printf("Квадратное уравнение, которое имеет два вещественных корня: %lf  %lf\n", x1, x2);
        break;
    case QUADRATIC_ONE_REAL_ROOT:
        printf("Квадратное уравнение, которое имеет один вещественный корень: %lf\n", x1);
        break;
    case QUADRATIC_TWO_COMPLEX_ROOTS:
        printf("Квадратное уравнение, которое имеет два комплексных корня \n");
        break;
    case LINEAR:
        printf("Линейное уравнение, которое имеет корень: %lf\n", x1);
        break;
    case NO_ROOTS:
        printf("Уравнение не имеет корней\n");
        break;
    case ANY_NUMBER_IS_ROOT:
        printf("Корнем является любое число\n");
        break;
    case FACTOR_IS_INF_OR_NAN:
        printf("Среди коэффициентов есть бесконечность или не-число\n");
        break;
    }

    return 0;
}
