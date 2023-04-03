#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Find len of the list
 * @h: Pointer to the list
 *
 * Return: Returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
