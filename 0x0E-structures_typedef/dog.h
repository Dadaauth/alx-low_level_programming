#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - a dog structure
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
