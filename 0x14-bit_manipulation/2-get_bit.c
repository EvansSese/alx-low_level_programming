#include <stdio.h>
#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The binary number
 * @index: Index
 *
 * Return: Returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if (n & mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
