#include "main.h"

/**
 * reverse_array - reverse array
 *@a: arg0
 *@n: arg1
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
