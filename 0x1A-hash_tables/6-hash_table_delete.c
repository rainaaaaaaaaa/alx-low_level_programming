#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *n, *next;

	if (!ht)
		return;

	for (a = 0; a < ht->size; a++)
	{
		n = ht->array[a];
		while (n)
		{
			next = n->next;
			free(n->key), free(n->value), free(n);
			n = next;
		}
	}

	free(ht->array);
	free(ht);
}
