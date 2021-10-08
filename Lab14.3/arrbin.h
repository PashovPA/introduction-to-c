#ifndef ARRBIN_H_INCLUDED
#define ARRBIN_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void *bin_search(void *a, void *elem, int length, int size, int(*compare)(void*, void*));

int bin_place(void *a, void *elem, int length, int size, int(*compare)(void*, void*));

int compare_int(int *a, int *b);

#endif // ARRBIN_H_INCLUDED
