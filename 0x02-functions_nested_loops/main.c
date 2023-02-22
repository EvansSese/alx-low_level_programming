#include <stdio.h>
#include "main.h"
/**
 * @r - variable to hold the return value
 */
int main()
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}
