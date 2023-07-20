#include "lists.h"

/**
 * dlistint_len - return list len
 *@h: linked list head
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
