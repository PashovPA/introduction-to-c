#include "arrutils.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int *a = NULL, size;
	printf("������� ������ �������\n");
	scanf("%d", &size);
	a = malloc(size * sizeof(int));
	if (!a)
	{
		printf("������ ��������� ������");
		return 0;
	}
	scan_int_array(a, size);
	del_even(a, &size);
	a = realloc(a, size * sizeof(int));
	print_int_array(a, size);
	free(a);
	return 0;
}
