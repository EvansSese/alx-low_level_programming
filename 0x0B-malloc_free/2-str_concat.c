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

	size_t len;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = strlen(s1) + strlen(s2) + 1;
	new_str = malloc(len);
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, s1);
	strcat(new_str, s2);
	return (new_str);
}
