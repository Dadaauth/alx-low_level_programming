#include <stdio.h>
/**
 * print_name - prints a name using the concept of function pointers
 * @name: the name to print
 * @f: a pointer to a function to call
 * Return: nothing.
 */
void print_name(char *name, char (*f)(char *))
{
	if (f != NULL)
		f(name);
}
