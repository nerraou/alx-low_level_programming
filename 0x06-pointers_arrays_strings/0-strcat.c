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
 * _strcat - puts2
 *@src: arg1
 *@dest: arg1
 *Return: string
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	i = 0;
	len = 0;
	len = _strlen(dest);
	while (src[i])
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
