#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 * @n: integer, start number
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
	}
	printf("\n");
}
