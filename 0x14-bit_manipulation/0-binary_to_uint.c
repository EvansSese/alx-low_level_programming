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
	unsigned int bit = 1;
	const char *end;

	if (b == NULL)
		return (0);
	while (*end != '\0')
		end++;
	while (end >= b)
	{
		if (*end == '1')
			result += bit;
		else if (*end != '0')
			return (0);
		bit <<= 1;
		end--;
	}
	return (result);
}
