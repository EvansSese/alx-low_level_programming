#include "search_algos.h"

/**
 * linear_search - Function to search for an element
 * @array: Array to search from
 * @size: Size of the array
 * @value: Value to look for
 *
 * Return: Returns the index of the value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
