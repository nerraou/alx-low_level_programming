#include "main.h"

/**
 *  _is_prime - check if n is prime
 *@n: number
 *@max: half of n
 *@current: number
 *Return: return 1 or 0
 */
int _is_prime(int n, int max, int current)
{
	if (current >= max)
		return (1);
	if (n % current == 0)
		return (0);
	return (_is_prime(n, max, current + 1));
}

/**
 *  is_prime_number - check if n is prime
 *@n: number
 *Return: return 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n != 2 && n % 2 == 0)
		return (0);
	return (_is_prime(n, n / 2, 2));
}
