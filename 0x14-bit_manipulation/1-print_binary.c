#include "main.h"

/**
 * print_binary - print binary
 * @n: int
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar("%d", n & 1);
}