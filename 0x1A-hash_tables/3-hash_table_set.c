#include "hash_tables.h"
/**
 * hash_table_set - Adds a node to the hash table
 * @ht: Hash table
 * @key: Key
 * @value: Value
 *
 * Return: 1 if succeeds 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	char *key_dup, *value_dup;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	key_dup = strdup(key);
	value_dup = strdup(value);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[index]->key, key_dup) == 0)
		{
			free(new_node);
			free(ht->array[index]->value);
			ht->array[index]->value = value_dup;
			return (1);
		}
	}
	if (key_dup == NULL || value_dup == NULL)
	{
		free(new_node);
		free(key_dup);
		free(value_dup);
		return (0);
	}
	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
