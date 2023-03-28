#include "main.h"
#include <string.h>

/**
 * _puts - this function print a integer
 * @s: the integer to print
 *
 * Return: the funciton return nothing
 */

void _puts(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
