#include <stdio.h>
#include <stdlib.h>
#include "printit.h"

void printpr(int a, int base)
{
    if (base > 16 || base < 2) return;
    if (a == 0) return;
    printpr(a / base, base);
    int t = abs(a % base);
    if (t < 10) printf("%d", t);
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
        default:
            printf("\nInternal error. Please contact the developer.\n");
            break;
        }
}

void printob(int a, int base)
{
    if (base > 16 || base < 2) return;
    if (a == 0) return;
    int t = abs(a % base);
    if (t < 10) printf("%d", t);
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
        default:
            printf("\nInternal error. Please contact the developer.\n");
            break;
        }
    printob(a / base, base);
}
