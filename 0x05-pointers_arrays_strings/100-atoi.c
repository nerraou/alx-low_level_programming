#include "main.h"
/**
 * _atoi - get number
 *@s: arg1
 *Return: number
 */
int _atoi(char *s)
{
	int	i;
	int	signe;
	int	num;

	i = 0;
	signe = 1;
	num = 0;
	while ((s[i] >= 7 && s[i] <= 13) || s[i] == ' ')
		i++;
	while (s[i] == '+')
		i++;
	while (s[i] == '-')
	{
		i++;
		signe *= -1;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + s[i] - '0';
		i++;
	}
	return (num * signe);
}
