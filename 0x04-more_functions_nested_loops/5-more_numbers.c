#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Prints 0 - 14 ten times
 * @n: Number parameter
 * @i: Digit parameter
 */
void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
