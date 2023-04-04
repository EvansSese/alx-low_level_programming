#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Function to get node
 * @head: Pointer to first node
 * @index: Index
 *
 * Return: Returns pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count = 0;
	listint_t *current_node;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		current_node = head->next;
		*head = current_node;
		count++;
		if (count == index)
		{
			return (*head);
		}
	}
	return (NULL);
}
