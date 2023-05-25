#include "variadic_functions.h"

/**
 * sum_them_all - sum all args
 *@n: number of ars
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list ap;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
