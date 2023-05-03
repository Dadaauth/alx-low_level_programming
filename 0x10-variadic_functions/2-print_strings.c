#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings passed to it
 * @separator: separator to be printed between strings
 * @n: number of arguments
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg_ptr;
	bool printSeparator = true;
	char *strPrint;

	if (separator == NULL)
		printSeparator = false;
	va_start(arg_ptr, n);
	while (i < n)
	{
		strPrint = va_arg(arg_ptr, char*);
		if (strPrint == NULL)
			printf("(nil)");
		else
			printf("%s", strPrint);
		if ((i + 1) != n && printSeparator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arg_ptr);
}
