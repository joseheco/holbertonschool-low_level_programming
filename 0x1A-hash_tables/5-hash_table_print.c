#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: hash table
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int index;
hash_node_t *node;
int x = 0;

if (ht == NULL)
    return;
{
	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		while (node)
		{
            if(x == 1)
                printf(", ");
			printf("'%s': '%s'", node->key, node->value);
            x = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
}
