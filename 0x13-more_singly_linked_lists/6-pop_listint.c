#include "lists.h"

/**
 * pop_listint - pop from list
 *@head: linked list head
 *Return: element
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int data;

	if (!head || !*head)
		return (0);
	first  = *head;
	data = first->n;
	*head = first->next;
	free(first);
	return (data);
}
