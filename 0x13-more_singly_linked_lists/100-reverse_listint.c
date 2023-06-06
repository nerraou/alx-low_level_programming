#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: linked list head
 * Return: new linked list head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;
	listint_t *it;

	it = *head;
	prev = NULL;
	if (it == NULL || it->next == NULL)
		return (it);
	while (it != NULL)
	{
		next = it->next;
		it->next = prev;
		prev = it;
		it = next;
	}
	*head = prev;
	return (prev);
}
