#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * print_dog - Function to print dog
 * @d: Dog pointer
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0.0)
	{
		printf("Age: 0.0\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
