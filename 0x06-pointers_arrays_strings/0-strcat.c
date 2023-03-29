#include "main.h"

/**
 * _strcat - the function concatenate two string
 * @dest: to string of destination 
 * @src: the first string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
		j++;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	return (dest);
}
