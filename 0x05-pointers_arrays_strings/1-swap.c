#include "main.h"

/**
 * swap_int - swap two numbers
 *@a: arg1
 *@b: arg2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
