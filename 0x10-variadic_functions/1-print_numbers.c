#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers using the
 * concept of variadic functions
 * @seperator: to be put between printed numbers
 * @n: number of arguements passed
 * @...: variadic function arguements
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i;

	va_start(arg_ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_ptr, int));
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
}
