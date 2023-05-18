#include "main.h"

/**
 * _realloc - _realloc
 * @ptr: arg1
 * @old_size: arg2
 * @new_size: arg3
 *Return: array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *char_ptr = ptr;
	unsigned int i;
	unsigned int size = old_size;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	if (size > new_size)
		size = new_size;
	for (i = 0; i < size; i++)
	{
		new_ptr[i] = char_ptr[i];
	}
	free(char_ptr);
	return (new_ptr);
}
