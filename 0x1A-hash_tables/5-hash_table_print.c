#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int a;
	bool comma;

	if (!ht)
		return;

	comma = 0;
	putchar('{');
	for (a = 0; a < ht->size; a++)
	{
		n = ht->array[a];
		while (n)
		{
			if (comma)
				printf(", ");
			else
				comma = 1;
			printf("'%s': '%s'", n->key, n->value);
			n = n->next;
		}
	}
	putchar('}'), putchar('\n');
}
