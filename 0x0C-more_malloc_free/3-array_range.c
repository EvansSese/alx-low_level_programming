#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - Function to print the range
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Returns int pointer
 */
int *array_range(int min, int max)
{
	int i = 0;
	int value;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	value = min;
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		ptr[i] = value + i;
	}
	return (ptr);
}
