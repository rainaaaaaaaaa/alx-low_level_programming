#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key in hash table
 * @ht: hash table
 * @key: given key
 *
 * Return: value (Success) | NULL (Failure)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *n;

	if (!ht || !key)
		return (0);

	indx = key_index((unsigned char *)key, ht->size);
	n = ht->array[indx];

	while (n)
	{
		if (!strcmp(key, n->key))
			return (n->value);
		n = n->next;
	}

	return (0);
}
