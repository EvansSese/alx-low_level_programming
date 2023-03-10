#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strspn - Function to return number of bytes found
 * @s: String parameter
 * @accept: Another string parameter
 *
 * Return: Number of bytes found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len = 0;
	int found;

	for (i = 0; s[i]; i++)
	{
		found = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			len++;
		}
		else
		{
			break;
		}
	}
	return (len);
}
