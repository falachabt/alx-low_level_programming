#include "main.h"

/**
 * _strncpy - concatenate two strings
 * @dest: the final string
 * @src: the second string with
 * @n: the number of byte we are gonna take from src
 *
 * Return: a pointer to des destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;


	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}



	return (dest);
}

