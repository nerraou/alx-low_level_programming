#include "function_pointers.h"

/**
 * int_index - iter to an array
 *@array: array
 *@size: array size
 *@cmp: function pointer
 *Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
