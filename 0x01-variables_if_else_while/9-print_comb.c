#include <stdio.h>
/**
 * main - shorts desc
 * Return: Return value is 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
		}
		putchar(' ');
	}

	return (0);
}
