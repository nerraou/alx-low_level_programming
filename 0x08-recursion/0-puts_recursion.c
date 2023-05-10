#include "main.h"

/**
 *  _puts_recursion -  puts recursion
 *@s: arg
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(++s);
}
