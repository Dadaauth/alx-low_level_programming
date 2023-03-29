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
	int i, len = 0;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	return (len);
}
/**
 * copy_str - copies strings
 * @s1: string 1
 * @s2: string 2
 * @s3: third string
 */

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
	int i;
	char *name2, *owner2;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	
	newdog->age = age;
	name2 = malloc(str_len(name) + 1);
	if (name2 == NULL)
	{
		free(newdog);
		free(name2);
		return (NULL);
	}
	owner2 = malloc(str_len(owner) + 1);
	if (owner2 == NULL)
	{
		free(newdog);
		free(name2);
		free(owner2);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		name2[i] = name[i];
	name2[i] = '\0';
	for (i = 0; owner[i]; i++)
		owner2[i] = owner[i];
	owner2[i] = '\0';

	newdog->name = name2;
	newdog->owner = owner2;

	return (newdog);
}
