#include "main.h"

/**
 *  _sqrt_rec - sqrt root
 *@n: number
 *@max: half of n
 *@current: number
 *Return: square root of n or -1
 */
int _sqrt_rec(int n, int max, int current)
{
	if (current >= max)
		return (-1);
	if (n == current * current)
		return (current);
	return (_sqrt_rec(n, max, current + 1));
}

/**
 *  _sqrt_recursion - sqrt root
 *@n: number
 *Return: square root of n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt_rec(n, n / 2, 1));
}
