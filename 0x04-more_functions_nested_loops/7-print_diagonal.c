#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Prints diagonal line
 * @n: Number of \ characters
 * @len: length of diagonal
 * @space: Spacing to achieve diagonal
 */
void print_diagonal(int n)
{
	int len;
	int space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if(len == n -1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
