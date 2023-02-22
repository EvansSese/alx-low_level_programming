#include <stdio.h>
#include "main.h"
/**
 * @r - variable to hold the return value
 */
int main()
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
