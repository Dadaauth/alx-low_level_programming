#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, u;

	for (i = 0; i < 10; i++)
	{
		for (u = 0; u < 15; u++)
		{
			if (u > 9)
			{
				_putchar((u / 10) + '0');
			}
			_putchar((u % 10) + '0');
		}
		_putchar('\n');
	}
}
