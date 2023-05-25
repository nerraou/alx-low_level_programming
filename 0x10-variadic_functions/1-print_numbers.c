#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: to be printed between numbers
 *@n: number of ars
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			printf("%d", va_arg(ap, int));
			if (i + 1 < n)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
