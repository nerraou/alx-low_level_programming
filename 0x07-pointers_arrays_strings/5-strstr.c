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
 * _strncmp - compare two strings
 *@s1: string 1
 *@s2: string 2
 *@n: area
 *Return: int
 */
int _strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned const char *str1;
	unsigned const char *str2;
	unsigned int i;
	int diff;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	diff = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		diff = str1[i] - str2[i];
		if (diff != 0)
			break;
		i++;
	}
	return (diff);
}

/**
 * _strstr - locate a substring in a string
 *@haystack: haystack
 *@needle: needle
 *Return: first occurrence of any character
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int needle_len;

	if (!needle[0])
		return (haystack);
	needle_len = _strlen(needle);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (_strncmp(haystack + i, needle, needle_len) == 0)
			return (haystack + i);
	}
	return (NULL);
}
