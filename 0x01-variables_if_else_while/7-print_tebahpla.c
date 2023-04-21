#include <stdio.h>

/**
 * print_tebahpla - prints alphabet from a to z in lowercase in reverse
 *
 */
void print_tebahpla(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
}

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	print_tebahpla();
	return (0);
}
