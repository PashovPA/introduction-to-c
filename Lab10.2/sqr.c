#include <stdio.h>
#include <math.h>
#include "sqr.h"

enum type analyze_function(double a, double b, double c, double *x1, double *x2)
{
    if (isnan(a) || isnan(b) || isnan(c) ||
        isinf(a) || isinf(b) || isinf(c))
            return FACTOR_IS_INF_OR_NAN;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                return ANY_NUMBER_IS_ROOT;
            else
                return NO_ROOTS;
        }
        if (x1 != NULL && x2 != NULL)
            *x1 = *x2 = -c / b;
        return LINEAR;
    }
    double d = b * b - 4 * a * c;

    if (d < 0)
    {
        if (x1 != NULL && x2 != NULL)
        return QUADRATIC_TWO_COMPLEX_ROOTS;
    }

    if (d == 0)
    {
        if (x1 != NULL && x2 != NULL)
            *x1 = *x2 = -b / 2 / a;
        return QUADRATIC_ONE_REAL_ROOT;
    }

    if (x1 != NULL && x2 != NULL)
    {
        *x1 = (-b + sqrt(d)) / 2 / a;
        *x2 = (-b - sqrt(d)) / 2 / a;
    }
    return QUADRATIC_TWO_REAL_ROOTS;
}
