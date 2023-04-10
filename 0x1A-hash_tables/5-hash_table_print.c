#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
		return;

	printf("{");
	for (unsigned long i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next != NULL)
				printf(", ");
			node = node->next;
		}
		if (i != ht->size - 1)
			printf(", ");
	}
	printf("}\n");
}
