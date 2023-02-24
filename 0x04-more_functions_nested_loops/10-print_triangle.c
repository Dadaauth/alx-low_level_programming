#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, space;

		for (i = 0; i < size; i++)
		{
			if (size > 1)
			{
				for (space = 0; space < size - i - 1; space++)
				{
					_putchar(' ');
				}
			}
			for (j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
