#include "substring.h"
#include <locale.h>

#define LENGTH 100

int main()
{
    setlocale(LC_CTYPE, "Russian");
    char a[LENGTH];
    printf("Введите строку:\n");
    if (fgets(a, LENGTH, stdin) == NULL)
        {
            printf("Неверный ввод!\n");
            return 1;
        }
    *strchr(a,'\n') = '\0';
    printf("Введите номер первого символа подстроки и её длину\n");
    int p, l;
    if (scanf("%d%d", &p, &l) != 2)
        {
            printf("Неверный ввод!\n");
            return 1;
        }
    char *buf = malloc(LENGTH * sizeof(char) + 1);
    printf("Искомая подстрока: \"%s\"\n\n", substring(a, buf, p, l));
    free(buf);
}
