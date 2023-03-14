#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - Function to concatenate all args
 * @ac: Parameter
 * @av: Parameter
 *
 * Return: Pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int total_len = 0;
	int index = 0;
	int i;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	str = malloc(total_len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(&str[index], av[i]);
		index += strlen(av[i]);
		str[index++] = '\n';
	}
	str[index] = '\0';
	return (str);
}
