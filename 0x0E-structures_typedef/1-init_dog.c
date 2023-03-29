#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - a function that initializes a dog struct
 * @d: a variable with type struct dog.
 * @name: name of the dog to init
 * @age: age of the dog to init
 * @owner: owner of the dog to init
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)	
		d->name = name;
		d->age = age;
		d->owner = owner;
}
