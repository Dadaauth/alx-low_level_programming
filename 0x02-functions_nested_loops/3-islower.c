#include "main.h"
/**
 * _islower - checks if the given value is in lowercase
 * @c: the value to be tested
 * Return: return 1 if c is in lowercase
 * and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
