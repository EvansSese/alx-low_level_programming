#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - Function to allocate memory to array
 * @nmemb: First argument
 * @size: Size of the array
 *
 * Return: Returns nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb > 0 && size > 0)
	{
		ptr = malloc(nmemb * size);
		if (ptr != NULL)
		{
			memset(ptr, 0, nmemb * size);
		}
	}
	return (ptr);
}
