#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - Print string in reverse
 * @s: String parameter
 */
void print_rev(char *s)
{
	char str[] = s;
	int len;
	int i;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i] + '0');
	}
}
