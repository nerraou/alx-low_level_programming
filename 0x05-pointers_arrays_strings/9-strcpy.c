#include "main.h"

/**
 * _strcpy - copy string
 *@dest: arg1
 *@src: arg2
 *Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
