#include "hash_tables.h"

/**
 * hash_table_print - hash table print
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int is_begin;
	hash_node_t *head;

	index = 0;
	is_begin = 1;
	if (!ht)
		return;
	printf("{");
	while (index < ht->size)
	{
		head = ht->array[index];
		while (head)
		{
			if (is_begin == 0)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
			is_begin = 0;
		}
		index++;
	}
	printf("}\n");
}
