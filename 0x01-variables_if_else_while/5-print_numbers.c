#include <stdio.h>

/**
 * print_numbers - prints all digits
 */
void print_numbers(void)
{
	char	digit;

	digit = '0';
	while (digit <= '9')
	{
		putchar(digit);
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
	print_numbers();
	return (0);
}
