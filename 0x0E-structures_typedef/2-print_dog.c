#include <stdio.h>
#include <unistd.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: a dog structure variable
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(2);
	if (d->name == NULL)
		printf("Name: (nil)");
	else	
		printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
