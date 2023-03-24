#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - adds all the arguements given together
 * @n: number of arguments given
 * @...: variadic arguments
 * Return: sum of all the arguments, zero(0) if no arguments
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list arg_ptr;
    unsigned int i;
    int sum = 0;

    if (n == 0)
        return (0);

    va_start(arg_ptr, n);
    for (i = 0; i < n; i++)
        sum += va_arg(arg_ptr, int);
    va_end(arg_ptr);
    return (sum);
}