#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 * @n: integer, start number
 */
void print_to_98(int n)
{
	int step;

	if (n < 98)
		step = 1;
	else
		step = -1;
	while (1)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");

		if (n == 98)
			break;
		n += step;
	}
	printf("\n");
}
