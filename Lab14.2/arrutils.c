#include "arrutils.h"

void scan_int_array(int *a,size_t size)
{
	int *i = a, *s = a + size;
	printf("¬ведите элементы массива\n");
	for (; i < s; ++i)
	{
		scanf("%i", i);
	}
	return;
}

void scan_double_array(double *a, size_t size)
{
	double *i = a, *s = a + size;
	printf("¬ведите элементы массива\n");
	for (; i < s; ++i)
	{
		scanf("%lf", i);
	}
	return;
}

void print_int_array(const int *a, size_t size)
{
	const int *i = a, *s = a + size;
	for (; i < s; ++i)
	{
		printf("%i ", *i);
	}
	printf("\n");
	return;
}

void print_double_array(const double *a, size_t size)
{
	const double  *i = a, *s = a + size;
	for (; i < s; ++i)
	{
		printf("%lf ", *i);
	}
	printf("\n");
	return;
}
void del_even(int *a, size_t *size)
{
	int *i = a;
	int k = 0;
	for (; i < a + *size; ++i)
	{
		if (*i % 2 == 0)
		{
			k++;
		}
		else
			*(i - k) = *i;
	}
	*size -= k;
	return;
}


void del_odd(int *a, size_t *size)
{
	int *i = a;
	int k = 0;
	for (; i < a + *size; ++i)
	{
		if (*i % 2 == 1)
		{
			k++;
		}
		else
			*(i - k) = *i;
	}
	*size -= k;
	return;
}
