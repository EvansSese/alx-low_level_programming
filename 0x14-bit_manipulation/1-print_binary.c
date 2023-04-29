#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - Prints binary representation of number
 * @n: Integer
 *
 * Return: Returns binary number
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1ul << (sizeof(unsigned long int) * 8 - 1);
	int s = 0;
	
	while (m)
	{
		if (n && m)
		{
			_putchar('1');
			s = 1;
		}
		else if (s)
		{
			_putchar('0');
		}
		m >>= 1;
	}
	if (!s)
		_putchar('0');
}
