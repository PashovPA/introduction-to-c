#include <locale.h>
#include "arrbin.h"
#include "arrutils.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int size, elem;
	printf("Введите число элементов массива\n");
	scanf("%d", &size);
	int *a = malloc(size * sizeof(int));
	if (!a)
	{
		printf("Ошибка выделения памяти");
		return 0;
	}
	scan_int_array(a, size);

    printf("Введите элемент для поиска в массиве\n");
	scanf("%d", &elem);
    void *p = bin_search(a, &elem, size, sizeof(int), &compare_int);
    if (p != NULL) printf("Указатель на элементе : %d\n", *(int*)p);
    else printf("Такого элемента нет\n");

    printf("Введите элемент для поиска места для вставки в массив\n");
    scanf("%d", &elem);
    int pos = bin_place(a, &elem, size, sizeof(int), &compare_int);
    if (pos != -1) printf("Его \" бинарное место \" : %d", pos);
    free(a);
	return 0;
}
