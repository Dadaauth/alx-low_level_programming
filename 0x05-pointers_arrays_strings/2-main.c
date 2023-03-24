#include <stdio.h>
#include "main.h"
/**
 * main - checks the code
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "A string to be counted!!";
	len = _strlen(str);
	printf("len = %d\n", len);
	return (0);
}
