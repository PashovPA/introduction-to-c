#include "arrmiss.h"

double average_arifm(const double *x, size_t size)
{
	double sum = 0;
	const double *i = x;
	for (; i < x + size; ++i) sum += *i;
    return sum / (double)size;
}

double average_sqr(const double *x, size_t size, double arifm)
{
	double sum = 0;
	const double *i = x;
	for (; i < x + size; ++i)
	{
		sum += (*i - arifm)*(*i - arifm);
	}
	return sqrt(1 / ((double)size - 1)*sum);
}

void print_miss(const double *x, size_t size, double sqr, double arifm)
{
	const double *i = x;
	printf("»ндексы элементов массива, которые €вл€ютс€ промахами : ");
	for (; i < x + size; ++i)
	{
		if (fabs(*i - arifm) > sqr) printf("%d ", 1 + (i - x));
	}
	printf("\n");
	return;
}
