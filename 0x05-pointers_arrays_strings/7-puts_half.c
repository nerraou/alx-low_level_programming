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
 * puts_half - puts half
 *@str: arg
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = _strlen(str);
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}
