#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string to modify
 *
 * Return: a pointer to the modified string
 *
 * Description: This function takes in one argument: a string `s`. It iterates
 * through the string and checks if each character is a lowercase letter. If it
 * is, the function changes it to its uppercase equivalent. The function returns
 * a pointer to the modified string.
 */
char *string_toupper(char *s)
{
	int i; /* counter variable */

	/* iterate through the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* check if character is lowercase */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/* change to uppercase */
			s[i] = s[i] - 'a' + 'A';
		}
	}

	return (s);
}
