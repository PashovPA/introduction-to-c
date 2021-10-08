#include "gcd_lcm.h"

/** Функция, которая итеративно вычсляет НОД двух чисел **/
int gcd_iterative(int a, int b)
{
    if ( a != 0 && b !=0 )
    {
    int t;
    while (b > 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
    }
    else
    {
    if(a == 0 && b == 0) return 0;
    if(a == 0 && b != 0) return b;
    if(b == 0 && a != 0) return a;
    }
}

/** Функция, которая рекурсивно вычсляет НОД двух чисел **/
int gcd_recursive(int a, int b)
{
    if ( a != 0 && b !=0 )
        return a % b == 0 ? b : gcd_recursive(b, a % b);
    else
    {
    if(a == 0 && b == 0) return 0;
    if(a == 0 && b != 0) return b;
    if(b == 0 && a != 0) return a;
    }
}


/** Функция, которая итеративно вычсляет НОК двух чисел **/
int lcm_iterative(int a, int b)
{
    if ( a != 0 && b !=0 )
        return a * b / gcd_iterative(a, b);
    else
        return 0;
}

/** Функция, которая рекурсивно вычсляет НОК двух чисел **/
int lcm_recursive(int a, int b)
{
    if ( a != 0 && b !=0 )
        return a * b / gcd_recursive(a, b);
    else
        return 0;
}
