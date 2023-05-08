#include "main.h"

/**
 * _memset - fill a byte string with a byte value
 *@s: string buffer
 *@b: byte to set
 *@n: size of s
 *Return: ref to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
