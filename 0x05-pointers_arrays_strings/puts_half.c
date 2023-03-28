#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: the string to slice
 *
 * Return: nothing to return
 */

void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}

	start = ((len % 2 == 0) ? len / 2 : (len + 1) / 2) - 1;
	for (start; i < len; start++)
	{
		_putchar(str[start]);
	}
	_putchar('\n');
}
