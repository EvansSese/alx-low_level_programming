#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Function to return duplicate string
 * @str: String parameter
 *
 * Return: Return pointer to duplicate string
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *new_str = malloc(len + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (new_str == NULL)
	{
		return (NULL);
	}
	memcpy(new_str, str, len + 1);
	return (new_str);
}
