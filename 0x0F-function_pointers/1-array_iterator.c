#include "function_pointers.h"

/**
 * array_iterator - iter to an array
 *@array: array
 *@size: array size
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || size <= 0 || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
