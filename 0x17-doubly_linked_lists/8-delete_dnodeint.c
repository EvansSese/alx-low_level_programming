#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node
 * @head: Head pointer
 * @index: Index
 *
 * Return: 1 if success -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (count < index)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
		count++;
	}
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
