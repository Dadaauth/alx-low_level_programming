#include <unistd.h>
#include "main.h"
/*
 * main - short desc
 * Return: Return value is Zero
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

/**
 * _putchar - writes the value of c to the stdout
 * @c: The character to be printed
 *
 * Return: on success 1.
 * On error, -1 is returned
 */

/** int _putchar(char c)
 * {
 *	return (write(1, &c, 1));
 * }
 */
