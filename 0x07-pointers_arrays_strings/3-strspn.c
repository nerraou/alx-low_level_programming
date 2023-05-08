#include "main.h"

/**
 * _strspn - span a string
 *@s: string
 *@accept: charset
 *Return: index of the first not exist character
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
