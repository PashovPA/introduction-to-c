#include <stdio.h>
#include <stdlib.h>
#include "printback.h"

void printback(int a, int p)
{
    if (p > 16 || p < 2) return;
    if (a == 0) return;
    int t = abs(a % p);
    if (t < 10)
        printf("%d", t);
    else
        switch (t)
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        }
    printback(a / p, p);
}

void printpr(int a, int p)
{
    if (p > 16 || p < 2) return;
    if (a == 0) return;
    int t = abs(a % p);
    if (t < 10)
        printf("%d", t);
    else
        switch (t)
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        }
    printback(a / p, p);
}
