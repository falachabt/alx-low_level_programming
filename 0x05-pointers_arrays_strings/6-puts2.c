#include "main.h"

/**
 * puts2 - print every oddd number
 * @str: the string from which we are going to print
 *
 * Return: nothing to return here
 */

void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i+= 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
