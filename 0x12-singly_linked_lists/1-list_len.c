#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - Function to show number of items
 * @h: Pointer
 *
 * Return: Returns number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if(h == NULL)
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
