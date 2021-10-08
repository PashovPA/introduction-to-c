#ifndef SQR_H_INCLUDED
#define SQR_H_INCLUDED

/*
 * Виды возращаемой целочисленной константы перечисления:
 * QUADRATIC_TWO_REAL_ROOTS - Квадратное уравнение, два вещественных корня
 * QUADRATIC_ONE_REAL_ROOT - Квадратное уравнение, один вещественный корень
 * QUADRATIC_TWO_COMPLEX_ROOTS - Квадратное уравнение, два комплексных корня
 * LINEAR - Линейное уравнение, одинственный корень
 * NO_ROOTS - Уравнение не имеет корней
 * ANY_NUMBER_IS_ROOT - Корнем является любое число
 * FACTOR_IS_INF_OR_NAN - коэффициенты бесконечности или не числа.
 */

enum type
{
    QUADRATIC_TWO_REAL_ROOTS,
    QUADRATIC_ONE_REAL_ROOT,
    QUADRATIC_TWO_COMPLEX_ROOTS,
    LINEAR,
    NO_ROOTS,
    ANY_NUMBER_IS_ROOT,
    FACTOR_IS_INF_OR_NAN
};

/*
 * Функция анализирует квадратное уравнение по его коэффициентам.
 * param a - коэффициент перед x^2
 * param b - коэффициент перед x
 * param c - свободный коэффициент
 * param x1 - первый корень уравнения
 * param x2 - второй корень уравнения
 * Функция возвращает целочисленную константу перечисления enum type
 */
enum type analyze_function(double a, double b, double c, double *x1, double *x2);

#endif // SQR_H_INCLUDED
