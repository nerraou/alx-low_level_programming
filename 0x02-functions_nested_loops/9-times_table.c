#include "main.h"

/**
 * print_two_digits - print two digit number
 * @n: two digit number
 * @print_pad: boolean print pad or not
 */
void print_two_digits(int n, int print_pad)
{
	if (n <= 9)
	{
		if (print_pad)
			_putchar(' ');
	}
	else
		_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			print_two_digits(i * j, j != 0);
		}
		_putchar('\n');
	}
}
