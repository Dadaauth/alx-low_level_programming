#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func - gets and returns the correct
 * function for the given operator type
 * @s: the operator sign
 * Return: a pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
