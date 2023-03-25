#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - Dog datatype
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 *
 * Description: Dog datatype
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
#endif
