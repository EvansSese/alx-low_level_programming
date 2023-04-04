#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Function to find sum
 * @head: Pointer to list
 *
 * Return: Sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
