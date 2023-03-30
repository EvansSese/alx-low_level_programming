#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Function to add node
 * @head: Pointer to pointer
 * @str: Pointer to string
 *
 * Return: Return the address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(strdup(str));
	temp->next = *head;
	*head = temp;
	return (head);
}
