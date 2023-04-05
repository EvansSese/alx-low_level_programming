#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes node
 * @head: Pointer to node
 * @index: Index at which to delete
 *
 * Return: 1 if succeeds, -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 2; i++)
	{
		temp = temp->next;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
