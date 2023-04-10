#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * @size: The size of the hash table's array
 *
 * Return: On success, a pointer to the newly created hash table
 *         On failure, NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

