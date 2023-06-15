#include "lists.h"
/**
 * get_dnodeint_at_index - Function to get node
 * @head: Pointer to head
 * @index: Index at which to find node;
 *
 * Return: The node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (current != NULL)
	{
		while (current != NULL)
		{
			if (i == index)
			{
				return (current);
			}
			current = current->next;
			i++;
		}
	}
	return (NULL);
}
