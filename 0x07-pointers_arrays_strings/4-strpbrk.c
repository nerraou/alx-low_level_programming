#include "main.h"

/**
 * _strpbrk - locate multiple characters in string
 *@s: string
 *@accept: charset
 *Return: first occurrence of any character
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
