#ifndef SUBSTRING_H_INCLUDED
#define SUBSTRING_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* функция выделяет подстроку в новый строковый буфер
 * входные параметры - введённая строка, новый строковый буфер, позиция первого символа подстроки, длина подстроки
 * выходные параметры - введённая строка
 * функция возращает указатель на первый символ подстроки в новом текстовом буфере
 */

char* substring(const char *str, char *substr, int stpos, long sub_length);

#endif // SUBSTRING_H_INCLUDED
