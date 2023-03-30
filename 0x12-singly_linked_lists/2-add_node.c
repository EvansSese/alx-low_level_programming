#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	list_t *temp;
	int len;
	char *s;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		s = NULL;
		len = 0;
	}
	else
	{
		s = strdup(str);
		len = strlen(s);
	}
	temp->str = s;
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (*head);
}
