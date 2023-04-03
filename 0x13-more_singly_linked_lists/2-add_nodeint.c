#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Function to add node
 * @head: Pointer to next node
 * @n: Integer to add
 *
 * Return: Address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
