#ifndef SPLITSTRINGSORTED_H_INCLUDED
#define SPLITSTRINGSORTED_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Функция преобразует строку в массив слов без разделителей
 * входные параметры - исходная строка, буфер для копирования строки, указатель на массив указателей строки, строка разделителей
 * функция возвращает количество слов
 */

size_t splitstring(const char* str, char *buf, char** words, const char* delmtrs);

/**
 * Функция преобразует строку в массив слов без разделителей
 * входные параметры - исходная строка, буфер для копирования строки, указатель на массив указателей строки, строка разделителей, массив частоты каждого слова
 * функция возвращает количество различных слов
 */

size_t splitstringsorted(const char* str, char *buf, char** words, const char* delmtrs, int *arr);

#endif // SPLITSTRINGSORTED_H_INCLUDED
