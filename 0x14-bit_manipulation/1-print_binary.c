#include "main.h"

/**
 * print_binary - print binary
 * @n: int
 */
void print_binary(unsigned long int n)
{
	int c;

	if (n > 1)
		print_binary(n >> 1);
	c = n & 1;
	_putchar(c + '0');
}
