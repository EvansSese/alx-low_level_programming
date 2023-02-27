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

	for (i = 0; i <= len/2; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
