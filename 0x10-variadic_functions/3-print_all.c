#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include "variadic_functions.h"
/**
 * print_all - a variadic function that can print
 * all variable data types of elements
 * passed to it.
 * @format: the format specifier
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list arg_ptr;
	int i = 0, j = 0, c = 0;
	char t_arr[] = "cifs", *str;

	va_start(arg_ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arr[j])
		{
			if (format[i] == t_arr[j] && c)
				printf(", ");
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg_ptr, int)), c = 1;
				break;
			case 'i':
				printf("%i", va_arg(arg_ptr, int)), c = 1;
				break;
			case 's':
				str = va_arg(arg_ptr, char*), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			case 'f':
				printf("%f", va_arg(arg_ptr, double)), c = 1;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(arg_ptr);
}
