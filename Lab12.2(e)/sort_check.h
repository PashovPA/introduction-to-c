#ifndef SORT_CHECK_H_INCLUDED
#define SORT_CHECK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "in_out.h"

int sort_check ( int a[],size_t s); // проверка отсортированности целочисленного массива a размерности s
/* возвращается 0 : при отсутствии монотонности
                1 : при возрастании
               -1 : при убывании
                2 : при равенстве всех элементов */

#endif // SORT_CHECK_H_INCLUDED
