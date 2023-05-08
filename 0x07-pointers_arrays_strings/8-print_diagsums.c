#include "main.h"

/**
 * print_diagsums - print diagsums
 *@a: 2d array
 *@size: size of the 2d array
 */
void print_diagsums(int *a, int size)
{
	int y;
	int x;
	int diag_sum;
	int a_diag_sum;

	diag_sum = 0;
	for (y = 0, x = 0; y < size; y++, x++)
	{
		diag_sum += a[y * size + x];
	}

	a_diag_sum = 0;
	for (y = 0, x = size - 1; y < size; y++, x--)
	{
		a_diag_sum += a[y * size + x];
	}
	printf("%d, %d\n", diag_sum, a_diag_sum);
}
