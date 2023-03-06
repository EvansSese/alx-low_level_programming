#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strstr - Function to locate substring
 * @haystack: String parameter
 * @needle: String parameter
 *
 * Return: Pointer to beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int needle_len = strlen(needle);
	int haystack_len = strlen(haystack);

	for (i = 0; i <= (haystack_len - needle_len); i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}	
