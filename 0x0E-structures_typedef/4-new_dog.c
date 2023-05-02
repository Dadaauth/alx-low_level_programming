#include <stdio.h>
#include <string.h>
#include "dog.h"
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
}
/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;

	new_dog = malloc(sizeof(dog_t));
	_strcpy(new_dog.name, name);
	_strcpy(new_dog.owner, owner);
	new_dog.age = age;
}
