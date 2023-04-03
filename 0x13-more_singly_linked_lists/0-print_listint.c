#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listin - Prints list
 * @h: Pointer to list
 *
 * Return: Return int
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		if (h->n == NULL)
		{
			printf("[%d] (nil)", 0);
		}
		else
		{
			printf("%d", h->n);
		}
		printf("\n");
		count++;
		h = h->next;
	}
	return (count);
}
