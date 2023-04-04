#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Frees the list
 * @head: Pointer to list head
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
	head = NULL;
}
