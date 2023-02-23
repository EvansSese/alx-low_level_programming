#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Prints 0 - 9
 * @i: Number parameter
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
