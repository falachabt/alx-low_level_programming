#include "main.h"

/**
 * print_triangle - print a triangel of the given input size
 * @size: the size of the triangle to be print
 *
 * Return: nothing to be return
 *
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int j;

		for (j = size - 1; j >= 0; j--)
		{
			int i;
			int a;

			i = 0;


			while (i < j)
			{
				_putchar(' ');
				i++;
			}

			a = j;

			while (a < size)
			{
				_putchar('#');
				a++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
