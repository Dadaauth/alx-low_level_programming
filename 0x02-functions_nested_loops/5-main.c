#include "main.h"

/**
 * test_sign - to test the code
 * @n: The value to be tested
 * Return: returns 0.
 */

int test_sign(int n)
{
	int r;

	r = print_sign(n);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
/**
 * main - the main function
 * Return: Returns 0.
 */
int main(void)
{
	test_sign(98);
	test_sign(0);
	test_sign(0xff);
	test_sign(-1);
	
	return (0);
}
