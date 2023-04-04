#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Pops first node
 * @head: Pointer to first node
 *
 * Return: Value of node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current_node;

	if (head == NULL)
		return (0);
	current_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = current_node;
	return (n);
}
