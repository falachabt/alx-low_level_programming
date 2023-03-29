#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: the final string
 * @src: the second string with
 * @n: the number of byte we are gonna take from src
 *
 * Return: a pointer to des destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i+j] = '\0';

	return (dest);
}

