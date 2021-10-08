#include "arrmiss.h"
#include "arrutils.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int size;
	double *x, arifm, sqr;
	printf("Введите число элементов массива\n");
	scanf("%d", &size);
	x = malloc(size * sizeof(double));
	if (!x)
	{
		printf("Ошибка выделения памяти");
		return 0;
	}
	scan_double_array(x, size);
	arifm = average_arifm(x, size);
	sqr = average_sqr(x, size, arifm);
    printf("Среднее арифметическое : %lf\nСреднее квадратическое отклонение : %lf\n", arifm, sqr);
    print_miss(x, size, sqr, arifm);
	free(x);
	return 0;
}
