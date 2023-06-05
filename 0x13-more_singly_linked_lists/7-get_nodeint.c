#include "lists.h"

/**
 * get_nodeint_at_index - get nodeint at index
 *@head: linked list head
 *@index: index
 *Return: element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
