#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: integer
 * Return: absolute value
 */
int print_last_digit(int n)
{
	int	last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
