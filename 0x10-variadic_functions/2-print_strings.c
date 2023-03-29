#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints a set of strings given as
 * arguments of a variadic function
 * @seperator: the seperator
 * @n: nuber of strings
 * @...: variadic arguments
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	int i;
	va_list arg_ptr;
	char *str;

	va_start(arg_ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_ptr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(arg_ptr);
}
