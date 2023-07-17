#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type of struct dog
 * @d: pointer to struct the dog to initialize
 * @name: name for initializing
 * @age: age for initializing
 * @owner: owner for initializing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
