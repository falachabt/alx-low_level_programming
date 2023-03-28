#include "main.h"

/**
 * _strcpy - copy the value of one pointer to another
 * @dest: the first pointer
 * @src: the second pointer
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
