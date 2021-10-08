#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Пашов Павел*/

enum typeequation
{ TWO_REAL_ROOTS,
  ONE_REAL_ROOT,
  TWO_COMPLEX_ROOTS,
  LINEAR,
  NO_ROOTS,
  ANY_NUMBER_IS_ROOT,
  FACTOR_IS_INF_OR_NAN};

enum typeequation analyze(double a, double b, double c, double *x1, double *x2)
{
    if (a != a || a == 1.0/0.0  || a == -1.0/0.0 || b != b || b == 1.0/0.0  || b == -1.0/0.0 || c != c || c == 1.0/0.0  || c == -1.0/0.0)
    {
        if (a == 0)
        {
            if (b == 0)
            {
                if (c == 0)
                    return ANY_NUMBER_IS_ROOT;
                else
                    return NO_ROOTS;
            }
            if ( x1 != NULL && x2 != NULL )
                *x1 = *x2 = -c/b;
            return LINEAR;
        }
        double d = b*b - 4*a*c;
        if ( d < 0)
        {
            if ( x1 != NULL && x2 != NULL )
            return TWO_COMPLEX_ROOTS;
        }
        if ( d == 0)
        {
            if ( x1 != NULL && x2 != NULL )
                *x1 = *x2 = -b / 2 / a;
            return ONE_REAL_ROOT;
        }
        if ( d > 0)
        {
            if ( x1 != NULL && x2 != NULL )
            {
                *x1 = (-b + sqrt(d)) / 2 / a;
                *x2 = (-b - sqrt(d)) / 2 / a;
            }
            return TWO_REAL_ROOTS;
        }
    }
    else return FACTOR_IS_INF_OR_NAN;
}


int main()
{
    setlocale(LC_ALL, "Rus");
    double a, b, c, x1, x2;
    printf("Введите коэффициенты квадратного уравнения");
    scanf("%lf%lf%lf\n", &a, &b, &c);
    switch(analyze(a, b, c, &x1, &x2))
    {
        case TWO_REAL_ROOTS:
            printf("Квадратное уравнение, которое имеет два вещественных корня: %lf  %lf\n", x1, x2);
            break;
        case ONE_REAL_ROOT:
            printf("Квадратное уравнение, которое имеет один вещественный корень: %lf\n", x1);
            break;
        case TWO_COMPLEX_ROOTS:
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
