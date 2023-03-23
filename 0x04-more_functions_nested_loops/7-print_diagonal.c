#include "main.h"

/**
 *print_diagonal -  draw a diagonal using symbols
 *@n: the lenght of the diagonal
 *
 *Return: nothing to return
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;

			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
