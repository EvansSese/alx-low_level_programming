#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int len, space;

	if (size > 0)
	{
		for (len = 1; len <= size; size++)
		{
			for (space = size - len; space > 0; space--)
			{
				_putchar(' ');
			}
			for (space = 0; space < len; space++)
			{
				_putchar('#');
			}
			if (len == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
