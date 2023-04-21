#include <stdio.h>

/**
 * print_comb - prints single digit combinations
 */
void print_comb(void)
{
	int	digit;

	digit = 0;
	while (digit <= 9)
	{
		putchar(digit + '0');
		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
}

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	print_comb();
	return (0);
}
