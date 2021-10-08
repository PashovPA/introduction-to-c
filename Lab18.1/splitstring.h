#ifndef SPLITSTRING_H
#define SPLITSTRING_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Функция преобразует строку в массив слов без разделителей
 * входные параметры - исходная строка, буфер для копирования строки, указатель на массив указателей строки, строка разделителей
 * функция возвращает количество слов
 */

size_t splitstring(const char* str, char *buf, char** words, const char* delmtrs);

#endif // SPLITSTRING_H
