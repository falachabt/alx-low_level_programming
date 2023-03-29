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
	char temp;

	i = 0;
	j = 0;
	while (src[i] != '\0' && i < n)
		temp[i] = src[i]
		i++;

	while (dest[j] != '\0')
	{
		temp[i + j] = dest[j];
		j++;
	}

	temp[i+j] = '\0';
	i = j - 1;
	j = 0;

	while (j < i)
	{
		dest[j] = temp[j];
		j++;
	}

	return (dest);
}

