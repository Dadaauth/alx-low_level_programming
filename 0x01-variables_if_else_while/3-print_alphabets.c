#include <stdio.h>
/**
 * main - short desc
 * Return - return value is 0
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
