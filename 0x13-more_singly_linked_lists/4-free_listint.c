#include "lists.h"

/**
 * free_listint - free list
 *@head: linked list head
 */
void free_listint(listint_t *head)
{
	listint_t  *to_free;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		to_free = head;
		head = head->next;
		free(to_free);
	}
}
