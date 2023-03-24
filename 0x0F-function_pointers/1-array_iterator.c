#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Function to array
 * @array: Array pointer
 * @size: Size of array
 * @action: Function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
