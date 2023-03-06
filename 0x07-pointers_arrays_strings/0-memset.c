#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memset - Function to fill memory with 1 byte
 * @s: String parameter
 * @b: Character parameter
 * @n: Integer parameter
 *
 * Return: Returns a pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while(n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}
