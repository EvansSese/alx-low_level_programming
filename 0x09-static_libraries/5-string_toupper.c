#include <stdio.h>
#include <string.h>
#include "main.c"
/**
 * string_toupper - Func to convert case
 * @str: String parameter
 *
 * Return: Returns a pointer
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && '*str <= 'z')
		{
			*str -= 'a' - 'A';
		}
		str++;
	}
	return (str);
}
