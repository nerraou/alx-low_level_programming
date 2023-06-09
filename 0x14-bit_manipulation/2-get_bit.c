#include "main.h"

/**
 * get_bit - get bit
 * @n: ulint
 * @index: index of bit
 * Return: value in the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n = n >> index;
	return (n & 1);
}
