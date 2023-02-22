#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if a given character is a letter, lowercase or uppercase
 * @c: The character to be checked
 * Retrun: 1 if character is a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	       return (1);
	return (0);
}	
