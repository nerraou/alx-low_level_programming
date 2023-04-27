#include "main.h"
/**
 * print_numbers_most_numbers - print numbers
 */

void print_numbers_most_numbers(void)
{
	char num;

	for (num = '0'; i <= '9'; i++)
	{
		if (num == '2' || num == '4')
			num++;
		_putchar(num);
	}
	_putchar('\n');
}
