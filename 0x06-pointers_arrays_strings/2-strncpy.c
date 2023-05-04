#include "main.h"

/**
 * _strncpy - puts2
 *@src: arg1
 *@dest: arg2
 *@n: arg3
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
