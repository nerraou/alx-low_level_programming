#include "main.h"

/**
 * flip_bits - flip bits counts
 * @n: number1
 * @m: number2
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int count;
	int bit_n;
	int bit_m;

	count = 0;
	for (i = 0; i < 64; i++)
	{
		bit_n = (n >> i) & 1;
		bit_m = (m >> i) & 1;
		if (bit_m != bit_n)
			count++;
	}
	return (count);
}
