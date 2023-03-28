#include "main.h"
#include <string.h>

/**
 * print_rev - print a string in reverse way
 * @s: the string to be print
 *
 * Return: nothing to be reutrn
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >=  0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
