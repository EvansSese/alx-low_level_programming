#include "lists.h"
/**
 * free_dlistint - Function to free list
 * @head: Pointer to head
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
