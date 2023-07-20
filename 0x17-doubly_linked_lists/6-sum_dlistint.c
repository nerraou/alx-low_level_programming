#include "lists.h"

/**
 * sum_dlistint - sum list
 * @head: list head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
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
