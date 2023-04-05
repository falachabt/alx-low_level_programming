#include "main.h"
#include <stddef.h>

/**
 * _strchr - find a char in an string
 * @s: the char in whic we fing a char
 * @c: the char to fing
 *
 * Return: a pointer to the first occurence of c int
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if(*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
	       return s;	


	return (NULL);
}
