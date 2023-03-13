#include <stdlib.h>
#include "main.h"
/**
 * create_array - Function to create array
 * @size: Size of the array
 * @c: The specific character
 *
 * Return: Pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[1] = c;
	}
	return (arr);
}
