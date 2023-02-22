#include <stdio.h>
#include "main.h"
/**
 * @r - variable to hold the return value
 */
int main()
{
	int r;

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
