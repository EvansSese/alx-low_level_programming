#include <stdio.h>
#include "main.h"
/**
 * clear_bit - Sets bit to 0 at index
 * @n: Binary number
 * @index: Index at which to clear bit
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1ul << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= mask;
	return (1);
}
