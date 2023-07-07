#include "hash_tables.h"
/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of array
 *
 * Return: pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *shash_table;

	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
		return (NULL);

	shash_table->size = size;
	shash_table->array = malloc(size * sizeof(shash_node_t *));
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	shash_table->shead = NULL;
	shash_table->stail = NULL;

	for (i = 0; i < size; i++)
		shash_table->array[i] = NULL;
	return (shash_table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node;
	char *key_dup, *value_dup;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	key_dup = strdup(key);
	value_dup = strdup(value);
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
	new_node->sprev = NULL;
	new_node->snext = NULL;
	if (ht->array[index] != NULL)
		ht->array[index]->sprev = new_node;

	ht->array[index] = new_node;
	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		shash_node_t *current = ht->shead;

		while (current->snext != NULL && strcmp(key, current->snext->key) > 0)
			current = current->snext;
		new_node->snext = current->snext;
		new_node->sprev = current;
		if (current->snext != NULL)
			current->snext->sprev = new_node;
		current->snext = new_node;
		if (new_node->snext == NULL)
			ht->stail = new_node;
	}
	return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	current = ht->shead;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	current = ht->stail;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		shash_node_t *current = ht->array[i];
		while (current != NULL)
		{
			shash_node_t *next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}
