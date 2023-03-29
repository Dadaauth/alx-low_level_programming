#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * str_len - djkenvjk
 * @str:  jfkfkenejkenj
 * Return: nfinfek
 */
int str_len(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{

	}
	return (i - 1);
}
/**
 * copy_str - copies strings
 * @s1: string 1
 * @s2: string 2
 * @s3: third string
 */
void copy_str(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i]; i++)
	{
		s1[i] = s2[i];
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
	newdog->name = malloc(str_len(name) + 1);
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(str_len(owner) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
	}
	copy_str(newdog->name, name);
	copy_str(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
