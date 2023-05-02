#include "main.h"
/**
 * rev_string - rev string
 *@s: arg
 */

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	i = _strlen(s) - 1;
	for (j = 0; j < i; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
	}
}
