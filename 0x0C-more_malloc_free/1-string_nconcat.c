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
 * string_nconcat - concat two strings
 * @s1: arg1
 * @s2: arg2
 * @n: arg3
 *Return: concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1;
	unsigned int len_s2;
	unsigned int i;
	char *dest;

	if (!s1)
		len_s1 = 0;
	else
		len_s1 = _strlen(s1);
	if (!s2)
		len_s2 = 0;
	else
	{
		len_s2 = _strlen(s2);
		if (n < len_s2)
			len_s2 = n;
	}
	dest = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!dest)
		return (NULL);
	for (i = 0; i < len_s1; i++)
	{
		dest[i] = s1[i];
	}
	for (i = 0; i < len_s2; i++)
	{
		dest[i + len_s1] = s2[i];
	}
	dest[len_s1 + len_s2] = '\0';
	return (dest);
}
