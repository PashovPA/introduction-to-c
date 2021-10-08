#include <locale.h>
#include "splitstringsorted.h"

#define LENGTH 10000

int main()
{
    setlocale(LC_CTYPE, "Russian");
    char a[LENGTH];
    int arr[LENGTH];
    printf("Введите строку : \n");
    if (fgets(a, LENGTH, stdin) == NULL)
    {
        printf("Неверный ввод!\n");
        return 1;
    }
    char **words = malloc(LENGTH / 2 + 1); /* Может быть не больше чем (n/2 + 1) слов, где n - кол-во символов*/
    char *buffer = malloc(LENGTH);
    int l = splitstringsorted(a, buffer, words, " ,.!?-\n\t", arr);
    printf("Различных слов в строке : %d\nАлфавитно упорядоченный словарь :\n", l);
    int i = 0;
    while(*(words + i) != NULL)
    {
        if ( *(words[i]) ) printf("Слово: \"%s\"\ Число появлений : %d\nЧастота появления : %d%%\n", *(words + i), arr[i], arr[i]*100/l);
        ++i;
    }
    free(words);
    free(buffer);
    return 0;
}
