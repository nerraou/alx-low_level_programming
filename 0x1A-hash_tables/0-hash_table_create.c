#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: array size
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i;

	h_table = malloc(sizeof(h_table));
	if (!h_table)
		return (NULL);
	h_table->size = size;
	h_table->array = malloc(sizeof(*h_table) * size);
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		h_table->array[i] = NULL;
	return (h_table);
}
