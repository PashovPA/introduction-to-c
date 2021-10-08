#include <locale.h>
#include "arrbin.h"
#include "arrutils.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int size, elem;
	printf("������� ����� ��������� �������\n");
	scanf("%d", &size);
	int *a = malloc(size * sizeof(int));
	if (!a)
	{
		printf("������ ��������� ������");
		return 0;
	}
	scan_int_array(a, size);

    printf("������� ������� ��� ������ � �������\n");
	scanf("%d", &elem);
    void *p = bin_search(a, &elem, size, sizeof(int), &compare_int);
    if (p != NULL) printf("��������� �� �������� : %d\n", *(int*)p);
    else printf("������ �������� ���\n");

    printf("������� ������� ��� ������ ����� ��� ������� � ������\n");
    scanf("%d", &elem);
    int pos = bin_place(a, &elem, size, sizeof(int), &compare_int);
    if (pos != -1) printf("��� \" �������� ����� \" : %d", pos);
    free(a);
	return 0;
}
