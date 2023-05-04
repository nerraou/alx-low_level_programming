#include "main.h"

/**
 * _toupper - make c to upper
 *@c: char
 *Return: c to upper
 */

int _toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/**
 * string_toupper - make string to upper
 *@str: arg0
 *Return: ref to arg0
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = _toupper(str[i]);
		i++;
	}
	return (str);
}
