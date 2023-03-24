#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function to print name
 * @name: Name parameter
 *
 * Return: Nothing
 */
void print_name(char *name, void(*f)(char *))
{
	(*f)(name);
}
