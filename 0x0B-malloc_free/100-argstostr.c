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
 * argstostr - args to str
 * @ac: arguments count
 * @av: arguments value
 *Return: concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	char *dest;
	int len;
	int i;
	int j;
	int k;

	len = 0;
	k = 0;
	if (ac <= 0 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			dest[k] = av[i][j];
			k++;
		}
		dest[k] = '\n';
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
