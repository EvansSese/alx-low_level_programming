#include "main.h"
/**
 * flip_bits - Number of bits needed to get to next number
 * @n: First number
 * @m: Next number
 *
 * Return: Number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
