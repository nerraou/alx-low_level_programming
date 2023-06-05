#include "lists.h"

/**
 * delete_nodeint_at_index - delete nodeint at index
 *@head: linked list head
 *@index: index
 *Return: 1 / -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur;
	listint_t *prev;

	unsigned int i;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
		return (1);
	}
	i = 0;
	cur = *head;
	prev = NULL;
	while (cur)
	{
		if (i == index)
		{
			prev->next = cur->next;
			free(cur);
			return (1);
		}
		i++;
		prev = cur;
		cur = cur->next;
	}
	return (-1);
}
