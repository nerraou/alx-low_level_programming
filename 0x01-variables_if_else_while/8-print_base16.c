#include <stdio.h>

/**
 * print_alphabt - prints alphabet from start to end
 * @start: start character
 * @end: end character
 */
void print_alphabet(char start, char end)
{
	while (start <= end)
	{
		putchar(start);
		start++;
	}
}

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
}

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	print_numbers();
	print_alphabet('a', 'f');
	putchar('\n');
	return (0);
}
