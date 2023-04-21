#include <stdio.h>

/**
 * print_alphabt - prints alphabt in lowercase
 */
void print_alphabt(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
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
	print_alphabt();
	return (0);
}
