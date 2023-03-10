#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - Prints each character in new line
 * @str: String parameter
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}
