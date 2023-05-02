#include "main.h"
/**
 * puts2 - puts2
 *@str: arg
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
		if (!str[i + 1])
			break;
	}
	_putchar('\n');
}
