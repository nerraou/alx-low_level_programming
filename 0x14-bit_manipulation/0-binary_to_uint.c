#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 * @b: string
 * Return: uint / 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary;
	int i;

	binary = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		binary = binary << 1;
		if (b[i] == '1')
			binary = binary | 1;
	}
	return (binary);
}
