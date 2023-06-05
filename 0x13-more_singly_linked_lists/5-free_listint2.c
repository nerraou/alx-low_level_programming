#include "lists.h"

/**
 * free_listint2 - free list
 *@head: linked list head
 */
void free_listint2(listint_t **head)
{
	listint_t *to_free;
	listint_t *it;

	if (head == NULL)
		return;
	it = *head;
	while (it != NULL)
	{
		to_free = it;
		it = it->next;
		free(to_free);
	}
	*head = NULL;
}
