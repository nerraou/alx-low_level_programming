#include "main.h"

/**
 * _strcmp - compare two strings
 *@s1: string1
 *@s2: string2
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff != 0)
		{
			break;
		}
		i++;
	}
	return (diff);
}
