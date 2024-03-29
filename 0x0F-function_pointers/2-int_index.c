#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Function to search for an integer
 * @array: Array with ints
 * @size: Size of array
 * @cmp: Function pointer
 *
 * Return: Returns int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
