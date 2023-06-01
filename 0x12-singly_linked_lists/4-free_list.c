#include "lists.h"

/**
 * free_list - free list
 *@head: linked list head
 */
void free_list(list_t *head)
{
	list_t  *to_free;

	if (head == NULL)
			return;

	while (head != NULL)
	{
			to_free = head;
			head = head->next;
			free(to_free->str);
			free(to_free);
	}
}
