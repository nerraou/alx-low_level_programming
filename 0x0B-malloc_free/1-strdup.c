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
 * _strdup - copy an array
 * @str: arg
 *Return: allocated array
 */
char *_strdup(char *str)
{
	int len;
	int i;
	char *dest;

	if (!str)
		return (NULL);
	len = _strlen(str);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
}
