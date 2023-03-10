#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - Prints half of the string
 * @str: String parameter
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int start;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len / 2) + 1;
	}
	for (i = start; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
