#include "main.h"

/**
 * clear_bit - clear bit at index
 * @n: ulint
 * @index: index of bit
 * Return: 1 Or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
