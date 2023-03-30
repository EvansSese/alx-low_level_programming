#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Function to print list
 * @h: Pointer
 *
 * Return: returns int
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)", 0);
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		printf("\n");
		count++;
		h = h->next;
	}
	return (count);
}
