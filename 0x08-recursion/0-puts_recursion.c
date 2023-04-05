#include "main.h"

/*
 * _put_recursion - print a string
 * @s: the string to print
 *
 * Return: null
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
