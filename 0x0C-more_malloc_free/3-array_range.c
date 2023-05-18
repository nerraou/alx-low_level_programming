#include "main.h"

/**
 * array_range - array range
 * @min: min value
 * @max: max value
 *Return: array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
