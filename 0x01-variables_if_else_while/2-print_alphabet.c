#include <stdio.h>

/**
 * print_alphabet - prints alphabet from a to z in lowercase
 *
 */
void print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
