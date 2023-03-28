#include <stdio.h>
#include "dog.h"
/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	struct dog mydog;

	mydog.name = "Poppy";
	mydog.age = 3.5;
	mydog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", mydog.name, mydog.age);
	return (0);
}
