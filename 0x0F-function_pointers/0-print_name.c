#include <stdio.h>
#include "main.c"
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
