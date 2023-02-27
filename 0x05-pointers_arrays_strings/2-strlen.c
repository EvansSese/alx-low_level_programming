#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen - Returns length of string
 * @s: Parameter for the string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	char str[] = *s;

	return (strlen(str));
}
