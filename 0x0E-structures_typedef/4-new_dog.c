#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * copy_str - copies strings
 * @s1: string 1
 * @s2: string 2
 * @s3: third string
 */
void copy_str(dog_t *s1, char *s2, char *s3)
{
	int i;

	s1->name = s2;
	s1->owner = s3;
	for (i = 0; *(s2 + i); i++)
	{
		
	}

}
/**
 * new_dog - creates a new dog
 * @name: name for the dog
 * @age: age for the dog
 * @owner: the dog owner
 * Return: a pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	
	copy_str(newdog, name, owner);
	newdog->age = age;

	return (newdog);
}
