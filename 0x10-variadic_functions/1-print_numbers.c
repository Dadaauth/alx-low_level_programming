#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers passed to it
 * @separator: what to print after each number
 * @n: number of variadic arguments
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	bool printSeparator = true;
	va_list arg_ptr;
	unsigned int i = 0;

	if (separator == NULL)
		printSeparator = false;
	va_start(arg_ptr, n);
	while (i < n)
	{
		printf("%d", va_arg(arg_ptr, int));
		if ((i + 1) != n && printSeparator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arg_ptr);
}
