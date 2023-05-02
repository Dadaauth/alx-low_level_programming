#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * lenOfStr - length of a string
 * @str: the string
 * Return: thhe length
 */
size_t lenOfStr(char *str)
{
	int i;
	size_t len = 0;

	for (i = 0; str[i]; i++)
		len++;
	return (len);
}
/**
 * _strcpy - string copy
 * @str1: string 1
 * @str2: string 2
 * Return: void.
 */
void _strcpy(char *str1, char *str2)
{
	int i;

	for (i = 0; str2[i]; i++)
	{
		str1[i] = str2[i];
	}
	str1[i] = '\0';
}
/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age
 * @owner: owner
 * Return: a new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name2, *owner2;

	if (name == NULL || owner == NULL)
		return (NULL);
	name2 = malloc(lenOfStr(name) + 1 * sizeof(char));
	if (name2 == NULL)
		return (NULL);
	owner2 = malloc(lenOfStr(owner) + 1 * sizeof(char));
	if (owner2 == NULL)
	{
		free(name2);
		return (NULL);
	}
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(name2);
		free(owner2);
		return (NULL);
	}
	_strcpy(name2, name);
	_strcpy(owner2, owner);
	new_dog->name = name2;
	new_dog->owner = owner2;
	new_dog->age = age;

	return (new_dog);
}
