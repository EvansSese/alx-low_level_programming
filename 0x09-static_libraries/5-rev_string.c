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
	int temp;

	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
	}
}
