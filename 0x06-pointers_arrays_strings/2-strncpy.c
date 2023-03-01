#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - Function to copy strings
 * @dest: Destination string
 * @src: Source string
 * @n: NUmber of characters to copy
 *
 * Return: Returns a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
