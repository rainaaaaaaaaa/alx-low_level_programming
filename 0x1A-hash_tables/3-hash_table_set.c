#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: given key
 * @value: given value
 *
 * Return: 1 (Success) | 0 (Failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *n;
	char *dup_value, *dup_key;

	if (!ht || (!key || !(*key)) || !value)
		return (0);
	indx = key_index((unsigned char *)key, ht->size);

	dup_value = strdup(value);
	if (!dup_value)
		return (0);

	n = ht->array[indx];
	while (n)
	{
		if (!strcmp(n->key, key))
		{
			free(n->value);
			n->value = dup_value;
			return (1);
		}
		n = n->next;
	}

	dup_key = strdup(key);
	if (!dup_key)
	{
		free(dup_value);
		return (0);
	}

	n = malloc(sizeof(*n));
	if (!n)
		return (0);
	n->key = dup_key, n->value = dup_value;
	n->next = ht->array[indx];
	ht->array[indx] = n;
	return (1);
}
