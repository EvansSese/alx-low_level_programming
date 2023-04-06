#include <stdio.h>
#include "main.h"
/**
 * get_endiannes - Gets endiannes
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endiannes(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if(*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
