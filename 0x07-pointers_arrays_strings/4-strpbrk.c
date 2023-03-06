#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: String parameter
 * @accept: String
 *
 * Return: Pointer to the byte s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}

	return (NULL);
}
