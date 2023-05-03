#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all of the variadic arguments it receives
 * @n: number of arguments passed
 * @...: variable number of arguments
 * Return: the sum of the arguments, if n == 0,
 * return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);
	va_start(arg_ptr, n);
	while (i < n)
	{
		sum += va_arg(arg_ptr, int);
		i++;
	}
	va_end(arg_ptr);
	return (sum);
}
