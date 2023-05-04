#include "main.h"

/**
 * putunbr - print an unsigned integer
 * @n: unsigned int
 */
void putunbr(unsigned int n)
{
	if (n >= 10)
		putunbr(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_number - print an integer
 * @n: int
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
		num = -n;
	else
		num = n;
	if (n < 0)
		_putchar('-');
	putunbr(num);
}
