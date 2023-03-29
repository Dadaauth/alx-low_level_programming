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
	char *ss1, *ss2;

	ss1 = malloc(sizeof(s2));
	ss2 = malloc(sizeof(s3));
	if (ss1 == NULL || ss2 == NULL)
		exit(98);

	for (i = 0; *(s2 + i); i++)
	{
		ss1[i] = s2[i];
	}
	for (i = 0; s3[i]; i++)
	{
		ss2[i] = s3[i];
	}
	s1->name = ss1;
	s1->owner = ss2;

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
