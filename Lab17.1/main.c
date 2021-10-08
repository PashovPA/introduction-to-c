#include "delspace.h"
#include <locale.h>

#define LENGTH 100

int main()
{
    int maximum;
    setlocale(LC_CTYPE, "Russian");
    char *a;
    printf("Введите строку:\n");
    a = malloc(LENGTH);
    if (fgets(a, LENGTH, stdin) == NULL)
        {
            printf("Неверный ввод!\n");
            return 1;
        }
    if (maxint(a, &maximum)) printf("Макс : %d", maximum);
        else printf("В строке нет целых чисел");
    return 0;
}
