#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - Print string in reverse
 * @s: String parameter
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int j;
	int i = len - 1;
	char rev_str[len];

	for (j = 0; j < len; j++)
	{
		rev_str[i] = s[j];
		i--;
	}
	puts(rev_str);
}
