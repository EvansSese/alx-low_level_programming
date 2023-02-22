#include <stdio.h>
#include "main.h"
/**
 * @r - variable to hold the return value
 */
int main()
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
