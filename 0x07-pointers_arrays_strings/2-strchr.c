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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (*(s + i++));
		}
		i++;
	}
	return (NULL);
}
