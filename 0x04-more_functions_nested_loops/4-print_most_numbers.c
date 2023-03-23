#include "main.h"

/**
 * print_most_numbers -  return number for 0 to 9
 *
 *
 *Return: no return for this function
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{

		if (i == 2 || i == 4)
		{
			continue;
		}

		_putchar(i);
	}

	_putchar('\n');
}
