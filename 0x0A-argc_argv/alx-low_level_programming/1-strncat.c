#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - Function to concatenate string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of chars to be cancatenated
 *
 * Return: Returns string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
