#include "main.h"

/**
 * _isdigit - is digit
 *@c: char
 *Return: 1 if c is digit, 0 if not
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _issign - is figit
 *@c: char
 *Return: 1 if c is sign, 0 if not
 */
int _issign(int c)
{
	return (c == '-' || c == '+');
}


/**
 * _atoi - copy string
 *@s: arg1
 *Return: number
 */
int _atoi(char *s)
{
	unsigned int i;
	int signe;
	int num;

	i = 0;
	signe = 1;
	num = 0;
	while (s[i] && !_isdigit(s[i]))
	{
		if (_issign(s[i]))
		{
			if (s[i] == '-')
				signe *= -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + s[i] - '0';
		i++;
	}
	return (num * signe);
}
