#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: String parameter
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i = len -1;
	int j;

	for (j = 0; j < len; j++)
	{
		printf("%c", s[j]);
		i--;
	}
	printf("\n");
}
