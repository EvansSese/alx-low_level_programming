#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - Function to initialize the dog struct
 * @d: Dog param
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
