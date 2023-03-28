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
	int limit;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	limit = ((len % 2 == 0) ? len / 2 : (len + 1) / 2);
	for (i = limit; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
