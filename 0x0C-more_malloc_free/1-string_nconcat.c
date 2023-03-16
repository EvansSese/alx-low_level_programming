#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Function to concatenate 2 strings
 * @s1: First string
 * @s2: Second string
 * @n: First n bytes
 *
 * Return: Pointer to memory address
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, copy_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	copy_len = (s2_len < n) ? s2_len : n;
	result = malloc(s1_len + copy_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, copy_len);
	result[s1_len + copy_len] = '\0';
	return (result);
}
