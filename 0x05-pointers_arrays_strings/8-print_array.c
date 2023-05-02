#include "main.h"

/**
 * print_array - print array
 *@a: arg1
 *@n: arg2
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *a);
		a++;
	}
	printf("%d\n", *a);
}
