#include "main.h"

/**
 * print_alphabet - print alphabet
 */
void print_alphabet(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		_putchar(var);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - print alphabet 10
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
