#include "main.h"

/**
 * print_two_digits - print two digit number
 * @n: two digit number
 */
void print_two_digits(int n)
{
	if (n <= 9)
		_putchar('0');
	else
		_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int	hour;
	int	minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			print_two_digits(hour);
			_putchar(':');
			print_two_digits(minute);
		}
	}
}
