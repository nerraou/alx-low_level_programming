#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * last_digit - printe n sign
 * @n: function agr
 *
 */
void last_digit(int n)
{
	int var;

	var = n % 10;
	if (var > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, var);
	}
	else if (var == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, var);
	}
	else if (var < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, var);
}
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit(n);
	return (0);
}
