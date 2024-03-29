#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * new_dog - Function to create new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 *
 * Return: Return pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = (char *)malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	new_dog->owner = (char *)malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
