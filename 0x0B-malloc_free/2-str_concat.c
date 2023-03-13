#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Function to concatenate 2 strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Return pointer to string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *new_str = malloc(len1 + len2 + 1);
	
	if (new_str == NULL)
	{
		return (NULL);
	}
	new_str = strcat(s1,s2);
	return (new_str);
}
