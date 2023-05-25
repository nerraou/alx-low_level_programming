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
	char *content;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		content = va_arg(ap, char *);
		if (separator)
		{
			if (!content)
				printf("(nil)");
			else
				printf("%s", content);
			if (i + 1 < n)
				printf("%s", separator);
		}
		else
		{
			if (!content)
				printf("(nil)");
			else
				printf("%s", content);
		}
	}
	printf("\n");
	va_end(ap);
}
