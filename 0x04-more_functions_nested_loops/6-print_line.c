#include <stdio.h>
#include "main.h"
/**
 * print_line - Prints a straight line
 * @n: Number of times to print _
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
