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
	int i;

	for (i = (sizeof(unsigned long int)) - 1; i >= 0; i--)
	{
		if (n & (1ul << i))
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}
