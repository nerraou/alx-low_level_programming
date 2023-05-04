#include "main.h"

/**
 * letter_to_leet - map letter to leet
 *@c: arg0
 *Return: mapped c
 */
char letter_to_leet(char c)
{
	char upper_c;
	char charset[] = "AEOTL";
	char leet_charset[] = "43071";
	int i;

	upper_c = _toupper(c);
	for (i = 0; charset[i] != '\0'; i++)
	{
		if (charset[i] == upper_c)
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
