#include "function_pointers.h"

/**
 * print_name - function that print a name
 *
 * @name: the name to be print
 * @f: the function
 *
 * Return: nothing to be return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
