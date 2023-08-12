#include "hash_tables.h"

/**
 * free_list - free list
 * @head: list
 *
 * Return: value or NULL
 */
void free_list(hash_node_t *head)
{
	hash_node_t *curr;

	while (head)
	{
		free(head->key);
		free(head->value);
		curr = head;
		head = head->next;
		free(curr);
	}
	free(head);
}

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 *
 * Return: value or NULL
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	index = 0;
	if (!ht)
		return;
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
			free_list(ht->array[index]);
		index++;
	}
	free(ht->array);
	free(ht);
}
