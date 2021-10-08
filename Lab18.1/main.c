#include <locale.h>
#include "splitstring.h"

#define LENGTH 100

int main()
{
    setlocale(LC_CTYPE, "Russian");
    char a[LENGTH];
    printf("Введите строку\n");
    if (fgets(a, LENGTH, stdin) == NULL)
    {
        printf("Неверный ввод!\n");
        return 1;
    }
    char **words = malloc(LENGTH / 2 + 1); /* Может быть не больше чем (n/2 + 1) слов, где n - кол-во символов*/
    char *buffer = malloc(LENGTH);
    splitstring(a, buffer, words, " ,.!?-\n\t");
    int i = 0;
    while(*(words + i) != NULL)
    {
        printf("%s\n", *(words + i));
        ++i;
    }
    free(words);
    free(buffer);
    return 0;
}
