#ifndef ARRMISS_H_INCLUDED
#define ARRMISS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* входные параметры - константный указатель на массив, размер массива
 * функции возвращает значение среднего арифметического
 */

double average_arifm(const double *x, size_t size); // вычисление среднего арифметического

/* входные параметры - константный указатель на массив, размер массива, среднее арифметическое, которое считаетс€ функцией average_arifm
 * функции возвращает значение среднего квадратического отклонени€
 */

double average_sqr(const double *x, size_t size, double arifm); // вычисление среднего квадратичного отклонени€

/* входные параметры - константный указатель на массив, размер массива, среднее арифметическое(average_arifm), среднее квадратическое(average_sqr)
 * void функци€
 */
void print_miss(const double *x, size_t size, double sqr, double arifm); // вывод индексов элементов массива, котрые €вл€ютс€ промахами

#endif // ARRMISS_H_INCLUDED
