#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - Adds node to end of list
 * @head: Pointer
 * @str: String pointer
 *
 * Return: Return address to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *last;
	int len;
	char *s;

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
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = s;
	temp->len = len;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
	}
	return (*head);
}
