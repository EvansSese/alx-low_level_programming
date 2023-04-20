#include <stdio.h>
#include "main.h"
/**
 * times_table - Function to print 9x table
 */
void times_table(void)
{
	int num, prod, mult;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			prod = num * mult;

			if (prod <= 9)
			{
				putchar(' ');
			}
			else
			{
				putchar((prod / 10) + '0');
			}
			putchar((prod % 10) + '0');
			if (mult < 9)
			{
				putchar(', ');
			}
		}
		putchar('\n');
	}
}
