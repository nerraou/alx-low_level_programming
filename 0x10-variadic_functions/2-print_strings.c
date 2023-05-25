#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: to be printed between numbers
 *@n: number of ars
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			printf("%s", va_arg(ap, char *));
			if (i + 1 < n)
				printf("%s", separator);
		}
		else
			printf("%s", va_arg(ap, char *));
	}
	printf("\n");
	va_end(ap);
}
