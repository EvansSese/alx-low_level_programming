#include "lists.h"
/**
 * insert_dnodeint_at_index - Adds node at index
 * @h: Pointer to head
 * @idx: Index
 * @n: int
 *
 * Return: Return address to node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	unsigned int dlist_len = 0;
	dlistint_t *current = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	while (current != NULL)
	{
		dlist_len++;
		current = current->next;
	}
	current = *h;
	if (idx == 0)
		add_dnodeint(&current, n);
	if (idx == dlist_len)
		add_dnodeint_end(&current, n);
	if (idx > dlist_len)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		while (current != NULL)
		{
			if (idx == (i + 1))
			{
				new_node->prev = current;
				new_node->next = current->next;
				if (current->next != NULL)
					current->next->prev = new_node;
				current->next = new_node;
				return (new_node);
			}
			current = current->next;
			i++;
		}
	}
	return (new_node);
}
