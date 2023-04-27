#include "main.h"

/**
 * _isupper - check is is uppercase
 * @c: arg
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
