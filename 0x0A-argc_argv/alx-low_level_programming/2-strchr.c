#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strchr - Function to find the character in the given string
 * @s: String parameter
 * @c: Character to be found
 *
 * Return: Returns pointer to first character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
