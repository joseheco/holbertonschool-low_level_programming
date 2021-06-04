#include "hash_tables.h"

/**
 * hash_table_delete - delete all
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned int i = 0;
hash_node_t *node = NULL, *next_node = NULL;

if (!ht)
	return;

while (i < ht->size)
{
	node = ht->array[i];
	while (node)
	{
		next_node = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = next_node;
	}
	i++;
}
free(ht->array);
free(ht);
}
