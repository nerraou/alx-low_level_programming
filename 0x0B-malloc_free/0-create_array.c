#include "main.h"

/**
 *  create_array - create array
 *@size: array size
 *@c: array content
 *Return: allocated array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (!size)
		return (NULL);
	array = (char *)malloc(sizeof(size));
	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
