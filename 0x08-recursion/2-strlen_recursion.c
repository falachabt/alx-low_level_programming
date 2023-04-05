#include "main.h"

/**
 * _strlen_recursion - calculate the lenght of a string
 * @s: the string to calcul the lenght
 *
 * Return: the lenght of the string s
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
