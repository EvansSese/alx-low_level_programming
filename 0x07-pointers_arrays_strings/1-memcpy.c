#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _memcpy - Function to copy memory area
 * @dest: Destination area
 * @src: Source area
 * @n: Integer parameter
 *
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = dest;
	char *pSrc = src;

	while (n-- > 0)
	{
		*pDest++ = *pSrc++;
	}
	return dest;
}
