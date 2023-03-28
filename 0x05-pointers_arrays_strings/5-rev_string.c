#include "main.h"
#include <string.h>

/**
 * rev_string - take a string and reverse it value
 * @*s: the pointer to the string to be reverse
 *
 * Return: null
 */

void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i;
	
	while (s[len] != '\0')
        	len++;

		for (i = 0; i < len / 2; i++)
		{
			temp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = temp;
		}

}
