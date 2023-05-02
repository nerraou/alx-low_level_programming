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
 *@str: arg1
 *Return: number
 */
int _atoi(const char *str)
{
	int i;
	int signe;
	int num;

	i = 0;
	signe = 1;
	num = 0;
	while (str[i] && !_isdigit(str[i]))
	{
		if (_issign(str[i]))
		{
			if (str[i] == '-')
				signe *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * signe);
}
