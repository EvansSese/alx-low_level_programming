#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int j = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (j)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			j = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
