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
	int i = len - 1;
	int j;
	char s1[1] = "";

	for (j = 0; j < len; j++)
	{
		s1[i] = s[j];
		i--;
	}
	strcpy(s, s1);
}
