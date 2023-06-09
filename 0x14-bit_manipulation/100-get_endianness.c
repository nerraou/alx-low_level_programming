#include "main.h"

/**
 * get_endianness - get_endianness(
 * Return: 1 Or 0
 */
int get_endianness(void)
{
	int n;

	n = 1;
	if (*(char *)&n == 1)
		return (1);
	return (0);
}
