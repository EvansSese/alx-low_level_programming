#include "main.h"
/**
 * print_binary - Prints binary representation of number
 * @n: Integer
 *
 * Return: Returns binary number
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if (1 & (n >> i))
		{
			_putchar('1');
			j++;
		}
		else if (j)
		{
			_putchar('0');
		}
		if (!j)
		{
			_putchar('0');
		}
	}
}
