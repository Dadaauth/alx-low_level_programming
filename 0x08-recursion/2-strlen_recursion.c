#include "main.h"
#include <stdio.h>
int count_length(char *s, int i)
{
	if (*(s + i) == '\0')
		return (i);
	i++;
	return (count_length(s, i));
}
int _strlen_recursion(char *s)
{
	return (count_length(s, 0));
}
