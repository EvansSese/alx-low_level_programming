#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Pointer to the binary
 *
 * Return: Returns the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			result = (result << 1) | 0;
		}
		else if (b[i] == 1)
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
