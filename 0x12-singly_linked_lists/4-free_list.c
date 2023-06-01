#include "lists.h"

/**
 * free_list - free list
 *@head: linked list head
 */
void free_list(list_t *head)
{
	list_t	*to_free;
	list_t	*it;

	if (head == NULL)
		return;

	it = head;
	while (it != NULL)
	{
		to_free = it;
		it = it->next;
		free(to_free->str);
		free(to_free);
	}
	free(head);
}
