#include "main.h"

/**
 * _strchr - locate character in string
 *@s: haystack
 *@c: source buffer
 *Return: return pointer to the located character or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
