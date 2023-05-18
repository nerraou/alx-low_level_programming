#include "main.h"

/**
 * _calloc - memory allocation
 * @nmemb: member count
 * @size: member size
 *Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *ptr;
	unsigned int i;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr)
	{
		for (i = 0; i < total_size; i++)
			*(ptr + i) = 0;
	}
	return (ptr);
}
