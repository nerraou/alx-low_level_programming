#include "main.h"

/**
 * letter_to_leet - map letter to leet
 *@c: arg0
 *Return: map letter to leet
 */
char letter_to_leet(char c)
{
	char charset[] = "AEOTLaeotl";
	char leet_charset[] = "4307143071";
	int i;

	for (i = 0; charset[i] != '\0'; i++)
	{
		if (charset[i] == c)
			return (leet_charset[i]);
	}
	return (c);
}

/**
 * leet - map string to leet
 *@str: arg0
 *Return: mapped string
 */
char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = letter_to_leet(str[i]);
	}
	return (str);
}
