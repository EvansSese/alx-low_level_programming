#include "main.h"
/**
 * set_bit - Sets bit to 1 at an index
 * @n: Binary number
 * @index: Index at which to set bit
 *
 * Return: 1 if succeess or -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= m;
	return (1);
}
