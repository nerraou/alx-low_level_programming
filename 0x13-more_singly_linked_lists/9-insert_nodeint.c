#include "lists.h"

/**
 * insert_nodeint_at_index - insert nodeint at index
 *@head: linked list head
 *@idx: index
 *@n: value
 *Return: element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *it;
	listint_t *elem;
	unsigned int i;

	if (!head)
		return (NULL);
	i = 0;
	it = *head;
	while (it)
	{
		if (i == idx)
		{
			elem = malloc(sizeof(listint_t));
			if (!elem)
				return (NULL);
			elem->n = n;
			elem->next = it;
			return (elem);
		}
		i++;
		it = it->next;
	}
	return (NULL);
}
