#include "main.h"

/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int num, num_2, product;

	int times_num = 9;

	for (num = 0; num <= times_num; num++)
	{
		for (num_2 = 0; num_2 <= times_num; num_2++)
		{
			product = num * num_2;

			if (num_2 == 0)
			{
				_putchar('0' + product);
				_putchar(',');
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
				_putchar(',');
			}
			else if (product >= 10)
			{
				_putchar(' ');
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
				_putchar(',');
			}

		}
		_putchar('\n');
	}
}
