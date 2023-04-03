#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - Add node at the end
 * @head: Pointer to list
 * @n: Integer to be added
 *
 * Return: Address to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *last;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (lest->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
	}
	return (*head);
}
