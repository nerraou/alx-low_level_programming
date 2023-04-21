#include <stdio.h>

/**
 * print_alphabet - prints alphabet from start to end
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
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	print_alphabet('a', 'z');
	print_alphabet('A', 'Z');
	putchar('\n');
	return (0);
}
