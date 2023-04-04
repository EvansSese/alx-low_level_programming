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
	free(head);
}
