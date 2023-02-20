#include <stdio.h>
/**
 * main - short desc
 * Return: Return value is 0
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		 putchar(str[i]);
	}

	return (0);
}
