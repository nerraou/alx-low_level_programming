#include "main.h"

/**
 * _check - check
 *@c: char
 *Return: 1 or 0
 */

int _check(int c)
{
	if (c == ',' || c == ';' || c == '.')
		return (1);
	if (c == '!' || c == '?' || c == '"')
		return (1);
	if (c == '(' || c == ')' || c == '{' || c == '}')
		return (1);
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}
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
 * cap_string - make string to upper
 *@str: arg0
 *Return: string
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	str[0] = _toupper(str[0]);
	while (str[i] != '\0')
	{
		if (_check(str[i]) && str[i + 1] && !_check(str[i + 1]))
		{
			str[i + 1] = _toupper(str[i + 1]);
		}
		i++;
	}
	return (str);
}
