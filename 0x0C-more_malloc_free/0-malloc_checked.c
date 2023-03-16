#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "main.h"
/**
 * malloc_checked - Function to check memory allocated
 * @b: Integer argument
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		_exit(98);
	}
	return (ptr);
}
