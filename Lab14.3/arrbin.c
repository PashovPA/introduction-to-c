#include "arrbin.h"

void *bin_search(void *a, void *elem, int length, int size, int(*compare)(void*, void*))
{
    int l = 0, r = length - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        switch(compare(a + size * m, elem))
        {
            case -1:
                 r = m - 1;
                 break;
            case 0:
                 return a + size * m;
            case 1:
                 l = m + 1;
                 break;
            default:
                 return NULL;
        }
    }
    return NULL;
}

int bin_place(void *a, void *elem, int length, int size, int(*compare)(void*, void*))
{
    int l = 0, r = length - 1;
    int pos = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        switch(compare(a + size * m, elem))
        {
            case -1:
                r = m - 1;
                pos = m - 1;
                break;
            case 0:
                pos = m + 1;
                l = m + 1;
                break;
            case 1:
                l = m + 1;
                pos = m + 1;
                break;
            default:
                return -1;
        }
    }
    if (compare(a, elem) == -1) return 0;
    else
        if (compare(a + (length - 1) * size, elem) == 1) return length;
        else
            if (pos != -1) return pos;
            else return -1;
}

int compare_int(int *a, int *b)
{
	if (*a > *b) return -1;
    else
        if (*a < *b) return 1;
        else return 0;
}

