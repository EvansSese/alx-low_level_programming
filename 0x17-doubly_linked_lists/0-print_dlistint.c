#include "lists.h"
/**
 * print_dlistint - Prints the elements of a doubly linked list
 * @h: Parameter
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
