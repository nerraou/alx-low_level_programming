#include "lists.h"

/**
 * sum_listint - sum listint
 *@head: linked list head
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
