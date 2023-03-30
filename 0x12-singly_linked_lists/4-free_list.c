#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees list
 * @head: Pointer to list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head != NULL)
		free(head);
}
