#include "lists.h"
/**
 * dlistint_len - Returns length of a list
 * @h: Head of the list
 *
 * Return: Length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
