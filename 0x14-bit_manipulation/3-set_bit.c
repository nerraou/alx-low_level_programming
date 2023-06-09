#include "main.h"

/**
 * set_bit - set bit at index
 * @n: ulint
 * @index: index of bit
 * Return: 1 Or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
