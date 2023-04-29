#include "main.h"
#include <stdlib.h>
/**
 * _strdup - create a pointer to a newlly allocated memory.
 * @str: string.
 *
 * Return: pointer of a
 */
char *_strdup(char *str)
{
	char *andstr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	andstr = (char *)malloc(sizeof(char) * (i + 1));

	if (andstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		andstr[j] = str[j];

	return (andstr);
}
