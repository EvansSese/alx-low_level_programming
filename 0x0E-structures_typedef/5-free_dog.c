#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Function to free dog
 * @d: Dog pointer
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
