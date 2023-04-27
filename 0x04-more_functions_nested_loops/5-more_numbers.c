#include "main.h"

/**
 * more_numbers - print numbers
 */

void more_numbers(void)
{
	int num;

	for (num = 0; num <= 14; num++)
	{
		if (num >= 10)
			_putchar(num / 10 + 48);
		_putchar(num % 10 + 48);
	}
	_putchar('\n');
	return (0);
}
