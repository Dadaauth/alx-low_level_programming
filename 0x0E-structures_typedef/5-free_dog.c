#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: the dog structure variable
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
