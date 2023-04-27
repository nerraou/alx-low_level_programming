#include "main.h"

/**
 * print_square - print square
 * @size: arg
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
