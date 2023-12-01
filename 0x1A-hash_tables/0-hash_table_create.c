#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: hash table size (array's size)
 *
 * Return: pointer to hash table (Success) | NULL (Failure)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	unsigned long int a;

	t = malloc(sizeof(*t));
	if (!t)
		return (NULL);

	t->size = size;
	t->array = malloc(sizeof((*t->array)) * size);
	if (!(t->array))
	{
		free(t);
		return (NULL);
	}

	for (a = 0; a < size; a++)
		t->array[a] = NULL;

	return (t);
}
