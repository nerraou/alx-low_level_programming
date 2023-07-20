#include "lists.h"

/**
 * free_dlistint - free list
 * @head: list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;
	dlistint_t *next;
	
	cur = head;
	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}
