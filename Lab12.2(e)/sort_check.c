#include "sort_check.h"

int sort_check (int a[], size_t s)
{
    int i=0,k=0,up=0,down=0;
    for (;i<s-1;++i)
    {
        if (a[i]<=a[i+1])
            k++;
    }

    if (k==s-1)
    {
        up=1;
    }
    k=0;
    i=0;

    for (;i<s-1;++i)
    {
        if (a[i]>=a[i+1])
            k++;
    }

    if (k==s-1)
    {
        down=1;
    }

    if (up&&down)
        return 2;
    else
        if (up&&!down)
            return 1;
        else
            if (!up&&down)
                return -1;
            else
                return 0;
}
