#include "main.h"

/**
 * _strlen - string length
 *@s: arg
 *Return: string length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * _strncat - puts2
 *@src: arg1
 *@dest: arg2
 *@n: arg3
 *Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	i = 0;
	len = _strlen(dest);

	while (n > i && src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
